#include <iostream>

using namespace std;

class Etap
{
public:
    int obrazek_a;
    int obrazek_b;
    int obrazek_c;      /// wartosci losowe do wyboru grafiki.

    int losowana_a;
    int losowana_b;
    int losowana_c;     /// mozliwe odpowiedzi.

    string test;        /// nie wiem po co ten string ale bez niego nie dziala :/

    Etap(int=0, int=0, int=0, int=0, int=0, int=0); /// glowny konstruktor.
    ~Etap();

    void losuj();             /// losowanie grafiki oraz mozliwych odpowiedzi.
    void pokaz(int obrazek);  /// wysietlenie grafik do zadania.
    void zadaj(int losowana); /// wysietlenie mozliwych odpowiedzi.

    friend void baner();
};
