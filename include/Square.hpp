#pragma once
#include "Shape.hpp"
#include <string>

class Square final : public Shape {
private:
    double m_cote{ 1.0 };
    std::string m_type {"Square"};

public:
    Square() = default;
    explicit Square(double cote);

    double calculPerimeter() const override;
    double calculAir() const override;
    void afficher() const override;
    std::string getType() const override;
};