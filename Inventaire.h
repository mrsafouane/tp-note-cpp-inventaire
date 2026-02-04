#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include <vector>
#include "Produit.h"
using namespace std;

class Inventaire {
private:
    vector<Produit> produits;

public:
    void ajouterProduit(Produit p);
    void afficherInventaire();
};

#endif