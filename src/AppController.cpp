#include "AppController.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include <iostream>
#include <limits>
#include <memory>

int AppController::run() {
    int choice{ -1 };

    while (choice != 0) {
        std::cout << "\n=== Bienvenue dans le Shape Manager ! ===\n";
        std::cout << "1 - Ajouter un cercle\n";
        std::cout << "2 - Ajouter un carre\n";
        std::cout << "3 - Afficher toutes les formes\n";
        std::cout << "4 - Afficher le nombre de formes par type\n";
        std::cout << "5 - Afficher l'air et le perimetre total\n";
        std::cout << "0 - Quitter\n";
        std::cout << "Votre choix : ";

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entree invalide.\n";
            choice = -1;
            continue;
        }

        switch (choice) {
        case 1: {
            double rayon{ 0.0 };
            std::cout << "Rayon du cercle : ";
            std::cin >> rayon;
            m_ShapeManager.addShape(std::make_unique<Circle>(rayon));
            std::cout << "Cercle ajoute !\n";
            break;
        }
        case 2: {
            double cote{ 0.0 };
            std::cout << "Cote du carre : ";
            std::cin >> cote;
            m_ShapeManager.addShape(std::make_unique<Square>(cote));
            std::cout << "Carre ajoute !\n";
            break;
        }
        case 3:
            std::cout << "\n--- Liste des formes (" << m_ShapeManager.countShapes() << ") ---\n";
            m_ShapeManager.afficherShapes();
            break;
        case 4:
            std::cout << "\n--- Repartition par type ---\n";
            m_ShapeManager.afficherEachType();
            break;
        case 5:
            std::cout << "\nAir total : " << m_ShapeManager.airTotal() << '\n';
            std::cout << "Perimetre total : " << m_ShapeManager.perimetreTotal() << '\n';
            break;
        case 0:
            std::cout << "Au revoir !\n";
            break;

        default:
            std::cout << "Choix inconnu.\n";
            break;
        }
    }

    return 0;
}