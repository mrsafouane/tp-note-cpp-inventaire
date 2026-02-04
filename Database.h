#ifndef DATABASE_H
#define DATABASE_H

#include <mariadb/mysql.h>
#include <string>
using namespace std;

class Database {
private:
    MYSQL *conn;

public:
    Database();
    ~Database();

    bool connecter();
    void insererProduit(string nom, double prix, int quantite);
    void afficherProduits();
};

#endif
