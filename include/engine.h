#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
public:
    Engine();
    void initialize();
    std::string getStatus() const;

private:
    bool initialized;
};

#endif
