#ifndef READER_H
#define READER_H

class Reader
{
private:
    Reader(const Reader& rk); //konstruktor kopiujacy
    Reader& operator=(const Reader& rk); //blokowanie przeciazonym operatorem przypisania

public:
    Reader(){}
    int Input();
    ~Reader(){}
};

#endif // READER_H
