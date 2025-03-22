/* Konwersja wartości w funkcji
Napisz funkcję konwertuj(double &x), która jeśli x jest dodatnie, zamieni je na ujemne, a jeśli ujemne – na dodatnie. */

#include <iostream>
using namespace std;

void konwertuj(double &x)
{
    x=x*(-1); 
}

int main()
{
    double liczba; 
    
    cout << "Podaj liczbę: " << endl; 
    cin >> liczba; 
    
    konwertuj(liczba); 
    
    cout << "Po konwersji: " << liczba; 
    
    return 0; 
}
