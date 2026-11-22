#pragma once
#include "ShapeManager.hpp"

class AppController {
private:
    ShapeManager m_ShapeManager;

public:
    AppController() = default;
    ~AppController() = default;

    int run();
};