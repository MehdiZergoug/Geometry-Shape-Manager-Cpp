#pragma once
#include "Shape.hpp"
#include <string>

class Circle final : public Shape {
private:
    double m_rayon{ 1.0 };
    std::string m_type {"Circle"};

public:
    Circle() = default;
    explicit Circle(double rayon);

    double calculPerimeter() const override;
    double calculAir() const override;
    void afficher() const override;
    std::string getType() const override;
};