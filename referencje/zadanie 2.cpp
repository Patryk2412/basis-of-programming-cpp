/* Zadanie 4 – Obliczanie silni przez referencję
Napisz funkcję silnia(int n, int &wynik), która obliczy silnię i zwróci wynik przez referencję.
Wskazówka: wynik to zmienna, do której wpiszesz obliczoną silnię. */

#include <iostream>
using namespace std;

// Funkcja oblicza silnię i zapisuje wynik w zmiennej przekazanej przez referencję
void silnia(int n, int &wynik) 
{
    wynik = 1; // Inicjalizacja wyniku

    for(int i = 1; i <= n; i++)
    {
        wynik *= i;  // Mnożymy kolejne liczby
    }
}

int main()
{   
    int liczba, wynik; 

    cout << "Podaj liczbę, której silnię chcesz policzyć: ";
    cin >> liczba; 
    
    silnia(liczba, wynik); // Wywołanie funkcji, wynik trafi do zmiennej `wynik`
    
    cout << "Silnia liczby " << liczba << " wynosi: " << wynik << endl;
    
    return 0;
}
