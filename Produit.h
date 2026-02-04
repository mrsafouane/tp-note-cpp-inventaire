#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:
    Produit(string n, double p, int q);

    void afficher();
    void ajouterStock(int q);
    void retirerStock(int q);
};

#endif