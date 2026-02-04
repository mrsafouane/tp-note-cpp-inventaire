# TP NOTÉ C++ – Gestion d’inventaire (POO)

## Présentation du projet

Ce projet est un TP noté en C++ ayant pour objectif de mettre en pratique
la programmation orientée objet (POO), la structuration d’un projet
et la connexion à une base de données MySQL.

L’application permet de gérer des produits (nom, prix, quantité)
en mémoire et de les enregistrer dans une base de données.

---

## Technologies utilisées

- Langage : C++
- Programmation Orientée Objet (POO)
- STL : vector
- Base de données : MySQL (via MariaDB)
- API C MySQL
- Outils : Git, GitHub, VS Code

---

## Structure du projet

inventaire_cpp/
├── Produit.h
├── Produit.cpp
├── Inventaire.h
├── Inventaire.cpp
├── Database.h
├── Database.cpp
├── main.cpp
├── sql/
│ └── inventaire.sql
├── .gitignore
└── README.md

---

## Description des classes

### Classe Produit
Représente un produit de l’inventaire avec :
- un nom
- un prix
- une quantité

Elle contient un constructeur et une méthode d’affichage.

---

### Classe Inventaire
Gère une collection de produits en mémoire.
Elle permet :
- d’ajouter des produits
- d’afficher l’inventaire complet

Les produits sont stockés dans un `vector`.

---

### Classe Database
Gère la connexion à la base de données MySQL.
Cette classe est responsable de :
- la connexion à la base
- l’insertion de produits (INSERT)
- l’affichage des produits enregistrés (SELECT)

La logique liée à la base de données est séparée du reste du projet.

---

## Base de données

Un script SQL est fourni dans le dossier `sql/`.

Il permet de :
- créer la base de données `inventaire`
- créer la table `produits`
- créer un utilisateur MySQL dédié à l’application

---

## Compilation et exécution

Depuis le terminal intégré de VS Code :

```bash
g++ main.cpp Produit.cpp Inventaire.cpp Database.cpp -o inventaire $(mariadb_config --cflags --libs)
./inventaire

---

## Description des classes

### Classe Produit
Représente un produit de l’inventaire avec :
- un nom
- un prix
- une quantité

Elle contient un constructeur et une méthode d’affichage.

---

### Classe Inventaire
Gère une collection de produits en mémoire.
Elle permet :
- d’ajouter des produits
- d’afficher l’inventaire complet

Les produits sont stockés dans un `vector`.

---

### Classe Database
Gère la connexion à la base de données MySQL.
Cette classe est responsable de :
- la connexion à la base
- l’insertion de produits (INSERT)
- l’affichage des produits enregistrés (SELECT)

La logique liée à la base de données est séparée du reste du projet.

---

## Base de données

Un script SQL est fourni dans le dossier `sql/`.

Il permet de :
- créer la base de données `inventaire`
- créer la table `produits`
- créer un utilisateur MySQL dédié à l’application

---

## Compilation et exécution

Depuis le terminal intégré de VS Code :

```bash
g++ main.cpp Produit.cpp Inventaire.cpp Database.cpp -o inventaire $(mariadb_config --cflags --libs)
./inventaire

---

## Description des classes

### Classe Produit
Représente un produit de l’inventaire avec :
- un nom
- un prix
- une quantité

Elle contient un constructeur et une méthode d’affichage.

---

### Classe Inventaire
Gère une collection de produits en mémoire.
Elle permet :
- d’ajouter des produits
- d’afficher l’inventaire complet

Les produits sont stockés dans un `vector`.

---

### Classe Database
Gère la connexion à la base de données MySQL.
Cette classe est responsable de :
- la connexion à la base
- l’insertion de produits (INSERT)
- l’affichage des produits enregistrés (SELECT)

La logique liée à la base de données est séparée du reste du projet.

---

## Base de données

Un script SQL est fourni dans le dossier `sql/`.

Il permet de :
- créer la base de données `inventaire`
- créer la table `produits`
- créer un utilisateur MySQL dédié à l’application

---

## Compilation et exécution

Depuis le terminal intégré de VS Code :

```bash
g++ main.cpp Produit.cpp Inventaire.cpp Database.cpp -o inventaire $(mariadb_config --cflags --libs)
./inventaire
Gestion de versions

Le projet est versionné avec Git.
Les exécutables et fichiers temporaires sont ignorés via .gitignore.
Conclusion

Ce projet met en œuvre les principes fondamentaux de la POO en C++
ainsi qu’une connexion simple à une base de données MySQL,
dans une structure claire et compréhensible.

---

## 🟢 ÉTAPE 3 — Sauvegarder
- `CTRL + O` → Entrée  
- `CTRL + X`

---

## 🟢 ÉTAPE 4 — Commit du README (OBLIGATOIRE)

```bash
git add README.md
git commit -m "Ajout README - description du projet"
git push
