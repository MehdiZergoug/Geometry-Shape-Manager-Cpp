#include "Square.hpp"
#include <iostream>
#include <string>

Square::Square(double cote)
    : m_cote{ cote }
{}

double Square::calculPerimeter() const {
    return m_cote * 4.0;
}

double Square::calculAir() const {
    return m_cote * m_cote;
}

void Square::afficher() const {
    std::cout << "[Type: Carre, Perimetre: " << calculPerimeter()
              << ", Air: " << calculAir() << "]\n";
}

std::string Square::getType() const {
    return "Carre";
}