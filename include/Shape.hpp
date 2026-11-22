#pragma once
#include <string>

class Shape {
public:
    virtual ~Shape() = default;

    virtual double calculPerimeter() const = 0;
    virtual double calculAir() const = 0;
    virtual void afficher() const = 0;
    virtual std::string getType() const = 0;
};