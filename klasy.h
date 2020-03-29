#include <iostream>

using namespace std;

class Etap
{
    int nr_etap;

    int obrazek_a;
    int obrazek_b;
    int obrazek_c; /// wartosci losowe do wyboru grafiki.

    int losowana_a;
    int losowana_b;
    int losowana_c; /// mozliwe odpowiedzi.

    int odpowiedz_a;
    int odpowiedz_b;
    int odpowiedz_c; /// odpowiedzi.

public:

    Etap(int=1, int=0, int=0, int=0, int=0, int=0, int=0); /// glowny konstruktor.
    ~Etap();

    void losuj(); /// losowanie grafiki oraz mozliwych odpowiedzi.
    void pokaz(int obrazek); /// wysietlenie grafik do zadania.
    void zadaj(int losowana); /// wysietlenie mozliwych odpowiedzi.

    friend void baner();
    friend int punkty();    /// sporawdza poprawnosc i dodaje punkt.
};
