#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "engine.h"

Engine::Engine():readen_ID(0),readen_PIN(0){} //lista inicjalizacyjna

void Engine::Start()
{
   S.Welcome_Messege();

   S.GetID_Messege();
   readen_ID = R.Input();

   S.GetPIN_Messege();
   readen_PIN = R.Input();
   S.Verify_Messege(Engine::Verify());
}


bool Engine::Verify()
{

    bool flag = false;
    for(int i=0;i<B.nw;i++)
    {
        if(readen_ID == B.Tab[i][0])
        {
            for(int j=0;j<B.nk;j++)
            {
                if(readen_PIN == B.Tab[i][j]) flag = true;
                else continue;
            }
        }
        else continue;
    }
    return flag;

}


Engine::~Engine(){}
