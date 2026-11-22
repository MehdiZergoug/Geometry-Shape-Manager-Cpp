# GeometryApp - Gestionnaire de Formes Geometriques en Console

Application interactive en ligne de commande developpee en C++20 permettant de creer, stocker et analyser differentes formes geometriques (cercles et carres) a l'aide du polymorphisme dynamique et de la gestion automatique de la memoire.

---

## Specifications & Technologies

* **Langage :** C++ (Standard C++20 strict)
* **Systeme de Build :** CMake (>= 3.20)
* **Architecture :** Programmation Orientee Objet (POO), classes abstraites, polymorphisme dynamique, RAII (`std::unique_ptr`), separation entre logique metier (`ShapeManager`) et interface utilisateur (`AppController`)
* **Conteneurs & Outils :** `std::vector`, `std::unordered_map`, `std::unique_ptr`, `std::numbers::pi` (`<numbers>`)

---

## Fonctionnalites

* **Ajout dynamique de formes :** Creation de cercles (a partir du rayon) et de carres (a partir du cote).
* **Affichage detaille :** Liste toutes les formes enregistrees avec leur type, leur perimetre et leur aire.
* **Statistiques par type :** Compte et affiche la repartition des formes par categorie (Cercle, Carre).
* **Calculs globaux :** Calcule et affiche la somme totale des aires et des perimetres de toutes les formes du gestionnaire.

---

## Structure du Projet

```text
.
├── CMakeLists.txt
├── README.md
├── include/
│   ├── AppController.hpp
│   ├── Circle.hpp
│   ├── Shape.hpp
│   ├── ShapeManager.hpp
│   └── Square.hpp
└── src/
    ├── AppController.cpp
    ├── Circle.cpp
    ├── ShapeManager.cpp
    ├── Square.cpp
    └── main.cpp