#include "Database.h"
#include <iostream>
using namespace std;

Database::Database() {
    conn = mysql_init(NULL);
}

Database::~Database() {
    if (conn != NULL) {
        mysql_close(conn);
    }
}

bool Database::connecter() {
    if (mysql_real_connect(
            conn,
            "localhost",
            "cppuser",
            "cpppass",
            "inventaire",
            0,
            NULL,
            0) == NULL) {

        cout << "Erreur connexion base de donnees" << endl;
        return false;
    }
    return true;
}

void Database::insererProduit(string nom, double prix, int quantite) {
    string requete =
        "INSERT INTO produits (nom, prix, quantite) VALUES ('" +
        nom + "', " +
        to_string(prix) + ", " +
        to_string(quantite) + ")";

    if (mysql_query(conn, requete.c_str())) {
        cout << "Erreur INSERT" << endl;
    } else {
        cout << "Produit insere en base" << endl;
    }
}

void Database::afficherProduits() {
    MYSQL_RES *result;
    MYSQL_ROW row;

    if (mysql_query(conn, "SELECT nom, prix, quantite FROM produits")) {
        cout << "Erreur SELECT" << endl;
        return;
    }

    result = mysql_store_result(conn);

    cout << "=== PRODUITS EN BASE ===" << endl;

    while ((row = mysql_fetch_row(result))) {
        cout << "Nom: " << row[0]
             << " | Prix: " << row[1]
             << " | Quantite: " << row[2]
             << endl;
    }

    mysql_free_result(result);
}
