/*
  Copyright (c) 2026 Prince
  All rights reserved.
  Unauthorized use, copying, or distribution is prohibited.
*/
#include "engine.h"
#include <iostream>

int main() {
    Engine engine;
    engine.initialize();
    std::cout << engine.getStatus() << std::endl;
    return 0;
}
