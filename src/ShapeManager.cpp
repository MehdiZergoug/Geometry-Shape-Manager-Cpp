#include "ShapeManager.hpp"
#include <iostream>
#include <string_view>
#include <unordered_map>

void ShapeManager::addShape(std::unique_ptr<Shape> shape) {
    if (shape) m_shapes.push_back(std::move(shape));
}

int ShapeManager::countShapes() const {
    return static_cast<int>(m_shapes.size());
}

std::vector<std::pair<std::string, int>> ShapeManager::eachType() const {
    std::unordered_map<std::string_view, int> count;
    for (const auto& shape : m_shapes) count[shape->getType()]++;

    std::vector<std::pair<std::string, int>> ans;
    ans.reserve(count.size());
    for (const auto& [type, nbr] : count) ans.emplace_back(std::string{ type }, nbr);
    
    return ans;
}

void ShapeManager::afficherEachType() const {
    for (const auto& [type, nbr] : eachType()) {
        std::cout << "[Type: " << type << ", Qtt: " << nbr << "]\n";
    }
}

void ShapeManager::afficherShapes() const {
    for (const auto& shape : m_shapes) {
        shape->afficher();
        std::cout << '\n';
    }
}

double ShapeManager::airTotal() const {
    double total{ 0.0 };
    for (const auto& shape : m_shapes) {
        total += shape->calculAir();
    }
    return total;
}

double ShapeManager::perimetreTotal() const {
    double total{ 0.0 };
    for (const auto& shape : m_shapes) {
        total += shape->calculPerimeter();
    }
    return total;
}