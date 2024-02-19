#ifndef BD_H
#define BD_H

class Base
{
private:
    int **Tab;   // Tablica dynamiczna
    const int nw = 3; //liczba wierszy
    const int nk = 2; //liczba kolumn

    Base(const Base& rbd); //konstruktor kopiujacy
    Base& operator=(const Base& rbd); //blokowanie przeciazonym operatorem przypisania

public:
    Base();
    ~Base();
    friend class Engine;
};

#endif // BD_H
