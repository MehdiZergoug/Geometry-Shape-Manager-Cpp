#include "Circle.hpp"
#include <iostream>
#include <numbers>
#include <string>

Circle::Circle(double rayon)
    : m_rayon{ rayon }
{}

double Circle::calculPerimeter() const {
    return 2.0 * std::numbers::pi * m_rayon;
}

double Circle::calculAir() const {
    return std::numbers::pi * m_rayon * m_rayon;
}

void Circle::afficher() const {
    std::cout << "[Type: Cercle, Perimetre: " << calculPerimeter()
              << ", Air: " << calculAir() << "]\n";
}

std::string Circle::getType() const {
    return "Cercle";
}