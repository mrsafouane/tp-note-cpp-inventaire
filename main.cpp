#include "Inventaire.h"

int main() {
    Inventaire inv;

    Produit p1("Clavier", 49.99, 10);
    Produit p2("Souris", 19.99, 20);
    Produit p3("Ecran", 199.99, 5);

    inv.ajouterProduit(p1);
    inv.ajouterProduit(p2);
    inv.ajouterProduit(p3);

    inv.afficherInventaire();

    return 0;
}