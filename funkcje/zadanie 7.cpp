/* Napisz funkcję, która przyjmuje jeden argument typu całkowitego i stwierdza, czy zadana jako 
argument liczba całkowita jest liczbą pierwszą. Funkcja ma zwracać jako rezultat wartość równą 
jeden, jeśli liczba spełnia warunek oraz zero w przeciwnym wypadku (lub wartość true, jeśli liczba 
spełnia warunek oraz false w przeciwnym wypadku). W funkcji main() przetestuj działanie stworzonej 
funkcji. */

#include <iostream>
using namespace std;

bool funkcja(int a)
{
    for(int i=2; i<a; i++)
    {
      if(a%i==0)
      {
        return 0; 
      }
    }
  return 1; 
}
int main()
{
  int a;
    cout << "Podaj liczbe: " << endl;
  cin >> a;
    cout << "liczba " << a << "  : 1-jest pierwsza, 0-nie jest pierwsza." << endl <<  funkcja(a);  
}
