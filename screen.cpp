#include <iostream>
#include "screen.h"
#include <stdlib.h>
#include <Windows.h>

using namespace std;

void Screen::Welcome_Messege()
{
    system("CLS");
    cout << "Witamy w bankomacie." << endl;
    cout << "Bankomant przeprowadza jednorazowa wyplate 50 z³." << endl;
    cout << "Nacijœnij dowolny przycisk, by przejœæ dalej" << endl;
    return;
}

void Screen::GetID_Messege()
{
    system("CLS");
    cout << "Podaj ID karty." << endl;
}

void Screen::GetPIN_Messege()
{
    cout << "Podaj PIN karty." << endl;
}

void Screen::Verify_Messege(bool bw)
{
    if(bw)
    {
        system("CLS");
        cout << "Prosze czekac..." << endl;
        Sleep(2000);
        system("CLS");
        cout << "Weryfikacja poprawna" << endl;
        Sleep(500);
        system("CLS");
        cout << "Odbierz gotowke" << endl;
        return;
    }
    else
    {
        system("CLS");
        cout << "Prosze czekac..." << endl;
        Sleep(2000);
        system("CLS");
        cout << "Wreyfikacja nie poprawna." << endl;
        Sleep(500);
    }

}
