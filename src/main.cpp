#include "engine.h"
#include <iostream>

int main() {
    Engine engine;
    engine.initialize();
    std::cout << engine.getStatus() << std::endl;
    return 0;
}
