#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>

#include "klasy.h"

using namespace std;

void Etap::losuj()      /// losowanie liczb z zakresu 1-10 bez powtorzen dla trzech kolejnych zmiennych dla funkcji losuj oraz zadaj.
{
    srand(time(NULL));

        obrazek_a=rand()%10+1;
    do{
        obrazek_b=rand()%10+1;
    } while(obrazek_a==obrazek_b);
    do{
        obrazek_c=rand()%10+1;
    } while((obrazek_a==obrazek_b)||(obrazek_a==obrazek_c));

    int randomowa_a,randomowa_b,randomowa_c;
        randomowa_a=rand()%3+1;
    do{
        randomowa_b=rand()%3+1;
        randomowa_c=rand()%3+1;
    } while ((randomowa_a==randomowa_b)||(randomowa_a==randomowa_c)||(randomowa_b==randomowa_c)); /// losowanie kolejnosci liczb

    if      ((randomowa_a<randomowa_b)&&(randomowa_a<randomowa_c)&&(randomowa_b<randomowa_c))
     { losowana_a=obrazek_a; losowana_b=obrazek_b; losowana_c=obrazek_c; } /// 123
    else if ((randomowa_a>randomowa_b)&&(randomowa_a>randomowa_c)&&(randomowa_b<randomowa_c))
     { losowana_a=obrazek_c; losowana_b=obrazek_a; losowana_c=obrazek_b; } /// 312
    else if ((randomowa_a<randomowa_b)&&(randomowa_a>randomowa_c)&&(randomowa_b>randomowa_c))
     { losowana_a=obrazek_b; losowana_b=obrazek_c; losowana_c=obrazek_a; } /// 231
    else if ((randomowa_a<randomowa_b)&&(randomowa_a<randomowa_c)&&(randomowa_b>randomowa_c))
     { losowana_a=obrazek_a; losowana_b=obrazek_c; losowana_c=obrazek_b; } /// 132
    else if ((randomowa_a>randomowa_b)&&(randomowa_a<randomowa_c)&&(randomowa_b<randomowa_c))
     { losowana_a=obrazek_b; losowana_b=obrazek_a; losowana_c=obrazek_c; } /// 213
    else if ((randomowa_a>randomowa_b)&&(randomowa_a>randomowa_c)&&(randomowa_b>randomowa_c))
     { losowana_a=obrazek_c; losowana_b=obrazek_b; losowana_c=obrazek_a; } /// 321
}

void Etap::pokaz(int obrazek)   /// tworzenie "grafiki" do zadania na podstawie funkcji losuj.
{
    if (obrazek==1)
        {
        if      (obrazek_a==1)   cout<<"[.....|....]";
        else if (obrazek_a==2)   cout<<"[....||....]";
        else if (obrazek_a==3)   cout<<"[....|||...]";
        else if (obrazek_a==4)   cout<<"[...||||...]";
        else if (obrazek_a==5)   cout<<"[...|||||..]";
        else if (obrazek_a==6)   cout<<"[..||||||..]";
        else if (obrazek_a==7)   cout<<"[..|||||||.]";
        else if (obrazek_a==8)   cout<<"[.||||||||.]";
        else if (obrazek_a==9)   cout<<"[|||||||||.]";
        else if (obrazek_a==10)  cout<<"[||||||||||]";
        }
    if (obrazek==2)
        {
        if      (obrazek_b==1)   cout<<"[.....|....]";
        else if (obrazek_b==2)   cout<<"[....||....]";
        else if (obrazek_b==3)   cout<<"[....|||...]";
        else if (obrazek_b==4)   cout<<"[...||||...]";
        else if (obrazek_b==5)   cout<<"[...|||||..]";
        else if (obrazek_b==6)   cout<<"[..||||||..]";
        else if (obrazek_b==7)   cout<<"[..|||||||.]";
        else if (obrazek_b==8)   cout<<"[.||||||||.]";
        else if (obrazek_b==9)   cout<<"[|||||||||.]";
        else if (obrazek_b==10)  cout<<"[||||||||||]";
        }
    if (obrazek==3)
        {
        if      (obrazek_c==1)   cout<<"[.....|....]";
        else if (obrazek_c==2)   cout<<"[....||....]";
        else if (obrazek_c==3)   cout<<"[....|||...]";
        else if (obrazek_c==4)   cout<<"[...||||...]";
        else if (obrazek_c==5)   cout<<"[...|||||..]";
        else if (obrazek_c==6)   cout<<"[..||||||..]";
        else if (obrazek_c==7)   cout<<"[..|||||||.]";
        else if (obrazek_c==8)   cout<<"[.||||||||.]";
        else if (obrazek_c==9)   cout<<"[|||||||||.]";
        else if (obrazek_c==10)  cout<<"[||||||||||]";
        }
}

void Etap::zadaj(int losowana)
{
    if      (losowana==1)  cout<<losowana_a;
    else if (losowana==2)  cout<<losowana_b;
    else if (losowana==3)  cout<<losowana_c;
}

Etap::Etap(int ob_a,int ob_b,int ob_c,int lo_a, int lo_b,int lo_c)
{
    ob_a = obrazek_a;
    ob_b = obrazek_b;
    ob_c = obrazek_c;
    lo_a = losowana_a;
    lo_b = losowana_b;
    lo_c = losowana_c;
}

Etap::~Etap(){}
