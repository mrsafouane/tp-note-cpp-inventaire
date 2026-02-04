#include "Produit.h"
#include <iostream>
using namespace std;

Produit::Produit(string n, double p, int q) {
    nom = n;
    prix = p;
    quantite = q;
}

void Produit::ajouterStock(int q) {
    quantite = quantite + q;
}

void Produit::retirerStock(int q) {
    if (q <= quantite) {
        quantite = quantite - q;
    } else {
        cout << "Stock insuffisant" << endl;
    }
}

void Produit::afficher() {
    cout << "Nom du produit : " << nom << endl;
    cout << "Prix : " << prix << endl;
    cout << "Quantite : " << quantite << endl;
}