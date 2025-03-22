/* 
 Stwórz funkcję, która dubluje przesłaną wartość
1) Utwórz funkcję doubleValue, która deklaruje przyjmuje referencję do liczby całkowitej (int&).
2) Funkcja ta powinna podwoić wartość przekazanej do niej liczby całkowitej.
3) Nie zwracaj niczego.
Nie pisz pełnego programu ani funkcji main(). */ 

#include <iostream>
using namespace std; 

void doubleValue(int &a)
{
    a=2*a; 
}

int main()
{
    int liczba; 
    
    cout << "Podaj liczbę, którą chcesz zdublowac: " << endl; 
    cin >> liczba; 
    
    doubleValue(liczba); 
    
    cout <<"Podana liczba po zdublowaniu: " << liczba; 
    
    return 0; 
    
}
