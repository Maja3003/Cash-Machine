#include "bd.h"

Base::Base()
{
    Tab = new int* [nw];
    for(int i=0; i<nw; i++)
    {
        Tab[i] = new int [nk];
    }
    Tab[0][0] = 11;     Tab[0][1] = 1111;
    Tab[1][0] = 22;     Tab[1][1] = 2222;
    Tab[2][0] = 33;     Tab[2][1] = 3333;
}

Base::~Base()
{
    if(Tab)
    {
        for(int i=0; i<nw; i++)
        {
            delete []Tab[i];
        }
        delete []Tab;
    }
}
