/*
  Copyright (c) 2026 Prince
  All rights reserved.
  Unauthorized use, copying, or distribution is prohibited.
*/
#include "engine.h"
#include <iostream>

Engine::Engine() : initialized(false) {}

void Engine::initialize() {
    initialized = true;
    std::cout << "Ward Logic Engine initialized successfully." << std::endl;
}

std::string Engine::getStatus() const {
    return initialized ? "Engine is running." : "Engine is not initialized.";
}
