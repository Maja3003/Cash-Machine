#ifndef SCREEN_H
#define SCREEN_H

class Screen
{
private:
    Screen(const Screen& rs); //konstruktor kopiujacy
    Screen& operator=(const Screen& rs); //blokowanie przeciazonym operatorem przypisania
public:
    Screen(){};

    void Welcome_Messege();

    void GetID_Messege();
    void GetPIN_Messege();

    void Verify_Messege(bool);

    ~Screen(){};
};

#endif // SCREEN_H
