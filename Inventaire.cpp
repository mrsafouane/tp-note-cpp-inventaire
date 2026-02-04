#include "Inventaire.h"
#include <iostream>
using namespace std;

void Inventaire::ajouterProduit(Produit p) {
    produits.push_back(p);
}

void Inventaire::afficherInventaire() {
    cout << "=== INVENTAIRE ===" << endl;

    for (int i = 0; i < produits.size(); i++) {
        produits[i].afficher();
        cout << "-----------------" << endl;
    }
}