#pragma once

#include "Shape.hpp"
#include <memory>
#include <string>
#include <utility>
#include <vector>

class ShapeManager {
private:
    std::vector<std::unique_ptr<Shape>> m_shapes;

public:
    ShapeManager() = default;

    void addShape(std::unique_ptr<Shape> shape);
    int countShapes() const;
    std::vector<std::pair<std::string, int>> eachType() const;
    void afficherEachType() const;
    void afficherShapes() const;
    double airTotal() const;
    double perimetreTotal() const;
};