/*  Napisz program, w którym użytkownik podaje swoje imię (dla uproszczenia może zaczynać się małą literą), 
a program oblicza ile samogłosek znajduje się w podanym imieniu i wyświetla wynik na ekranie. 
Ponadto, jeśli podane imię ma więcej niż 8 liter, to program powinien również wyświetlić stosowny komunikat. */ 

#include <iostream>

using namespace std;

int main()
{
    string imie; 
    int dlugosc; 
    int ile=0; 
    
    cout << "Podaj imie (małymi literami): "<< endl;
    cin >> imie; 
    
    dlugosc = imie.length();
        for(int i=0; i<dlugosc; i++)
    {
        if(imie[i]=='a' || imie[i]=='e' || imie[i]=='o'|| imie[i]=='u' || imie[i]=='i' || imie[i]=='y')
        {
            ile++; 
        }
    }
        cout << "Podane imie ma: " << ile << " samogłosek. " << endl;
        if(dlugosc>8)
    {
        cout << "Podane imie ma wiecej niz 8 liter. " << endl; 
    }
    }
