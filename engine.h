#ifndef ENGINE_H
#define ENGINE_H

#include "bd.h"
#include "reader.h"
#include "screen.h"

class Engine
{
private:
    int readen_ID;
    int readen_PIN;

    Base B;
    Reader R;
    Screen S;

    bool Verify();

    Engine(const Engine& rb);
    Engine& operator=(const Engine& rb);

public:
    Engine();

    void Start();

    ~Engine();
};

#endif // ENGINE_H
