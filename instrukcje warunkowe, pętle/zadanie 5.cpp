/* Napisz program, który obliczy i wyświetli na ekranie wartość silni liczby podanej przez 
użytkownika (pamiętaj, że 0! = 1). 
Przykładowy wynik działania programu: 
Podaj liczbę: 6 
6! = 720  */

#include <iostream>
using namespace std; 
int main()
{
    int a, iloczyn=1; 
    
    cout << "Podaj liczbe: " << endl; 
    cin >> a;
    
    for(int i=a; i>=1; i--)
    {
        iloczyn=iloczyn*i; 
    }
    cout << "Silnia z liczby " << a <<": " << iloczyn << endl; 
    
}
