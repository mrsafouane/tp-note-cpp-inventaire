#include "Produit.h"
#include "Inventaire.h"
#include "Database.h"

int main() {
    // Partie POO (mémoire)
    Inventaire inv;

    Produit p1("Clavier", 49.99, 10);
    Produit p2("Souris", 19.99, 20);

    inv.ajouterProduit(p1);
    inv.ajouterProduit(p2);

    inv.afficherInventaire();

    // Partie Base de données
    Database db;

    if (db.connecter()) {
        db.insererProduit("Clavier", 49.99, 10);
        db.insererProduit("Souris", 19.99, 20);

        db.afficherProduits();
    }

    return 0;
}

