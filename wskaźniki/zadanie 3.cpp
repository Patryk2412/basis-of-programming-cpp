/* 
Zadanie 3 – Dynamiczna alokacja tablicy
------------------------------------------------------------
1) Stwórz wskaźnik do `int`, który będzie przechowywał dynamiczną tablicę.
2) Poproś użytkownika o podanie rozmiaru tablicy.
3) Przydziel pamięć dynamicznie (`new[]`).
4) Wypełnij tablicę liczbami (np. indeks * 2).
5) Wyświetl zawartość tablicy.
6) Zwolnij pamięć po użyciu (`delete[]`).

Cel: Pokazanie, jak działa dynamiczna tablica w C++.
*/

#include <iostream>
using namespace std; 
int main()
{
    int rozmiar; 
    
    cout << "Podaj rozmiar tablicy: " << endl; 
    cin >> rozmiar; 
    
    int *tab=new int[rozmiar]; 
    
    cout << "Elementy tablicy: "; 
    
    for(int i=0; i<rozmiar; i++)
    {
        tab[i]=i*2; 
        cout << tab[i] << " "; 
    }
    delete[] tab; 
    tab=nullptr; 
}
