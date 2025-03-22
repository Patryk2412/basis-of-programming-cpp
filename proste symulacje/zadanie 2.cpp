// Przykład: W urnie znajduje sie 10kul ponumerowanych od 1 do 10. 8 razy losujemy jedna 
//     ze zwracaniem. Jakie jest prawdopodobienstwo, że przynajmniej trzy razy wylosujemy siodemke 
//     lub wieksza liczbe i ani razu nie wylosujemy kuli nr 2 ani 3.

#include <iostream>
using namespace std; 

int main()
{
    srand(time(0)); 
    
    int a; // losowana liczba
    int licznik1=0;  // Zlicza wystąpienia "7" lub większej
    int licznik2=0;  // Zlicza przypadki, w których warunek został spełniony
    int warunek=0; // Przechowuje informację, czy warunek został spełniony

    // 10000 prób: 
    for(int i=0; i<10000; i++)
    {
        licznik1=0; 
        warunek=0; 
        
        for(int j=0; j<8; j++)
        {
            a = 1 + rand()%10;  // Losowanie liczby od 1 do 10
            
            if(a>=7)
            {
                licznik1++;  // Liczymy liczby 7, 8, 9, 10
            }
            else if(a==2 || a==3)
            {
                warunek=1;  // Warunek jest niespłniony, jeśli wylosujemy 2 lub 3
            }
        }
        
        // Po zakończeniu 8 losowań sprawdzamy warunek
        if (licznik1 >= 3 && warunek == 0)
        {
            licznik2++;  // Zliczamy przypadki spełniające warunek
        }
    }
    cout << "Prawdopodobieństwo: " << (double)licznik2 / 10000 << endl; 
}
