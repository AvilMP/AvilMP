#include <iostream>
#include <windows.h>
#include <conio.h> /// getch.

#include "klasy.h"

using namespace std;

int punktacja=0;

int odpowiedz_a;
int odpowiedz_b;
int odpowiedz_c;

int punkty(int odp_a,int odp_b,int odp_c,int obr_a,int obr_b,int obr_c);  /// dodaje punkt gdy prawda.
void baner(int nr_etapu);                                                 /// wyswietla nazwe programu/gry.

int main()
{
    Etap e[10];
    for (int i=1; i<=10; i++)
    {
        baner(i);
        Etap e[i]; e[i].losuj();
        for (int j=1; j<=3; j++)
        {
            cout<<"     "<<j<<". ";  e[i].pokaz(j);
            cout<<"     ";
        }
        cout<<endl<<endl;

        for (int g=1; g<=3 ; g++)
        {
            string odp;
            if      (g==1)  odp="1";
            else if (g==2)  odp="2";
            else            odp="3";

            cout<<"           "<<odp<<". ("; e[i].zadaj(g);
            cout<<")       ";
        }
        cout<<endl<<endl;

        cout<<"Podaj rozwiazanie:"<<endl;
        cout<<"Obrazek nr1: ";
        cin>>odpowiedz_a;
        cout<<endl;
        cout<<"Obrazek nr2: ";
        cin>>odpowiedz_b;
        cout<<endl;
        cout<<"Obrazek nr3: ";
        cin>>odpowiedz_c;
        cout<<endl;

        punkty(odpowiedz_a, odpowiedz_b, odpowiedz_c, e[i].obrazek_a, e[i].obrazek_b, e[i].obrazek_c);
        system("cls");
        if (i==10) break;
    }
    baner(10);

    cout<<" Twoje punkty to: "<<punktacja<<endl;

    return 0;
}


int punkty(int odp_a,int odp_b,int odp_c,int obr_a,int obr_b,int obr_c) /// sprawdza opowiedzi i przyznaje punkty.
{
    if ((odp_a==obr_a)&&(odp_b==obr_b)&&(odp_c==obr_c)) return punktacja++;
    else return 0;
}

void baner(int nr_etapu)
{
    cout<<"Etap "<<nr_etapu<<" z 10                 "<<"~~~~Hello Puzzle~~~~"<<"            Punkty: "<<punktacja<<endl<<endl;
    cout<<"Podaj wartosci A,B lub C wpisujac liczby w prawid³owej kolejosci na podstawie grafik ;)";
    cout<<endl<<endl;
}
