/* 5. Napisać funkcję int najmniejszyNieDzielnik(int n) 
 która zwraca najmniejszą liczbę naturalną, która nie jest dzielnikiem n. */

#include <iostream> 
using namespace std;

int najmniejszyNieDzielnik(int n)
{
   int i=1; 
   
   while(n%i==0)
   {
       i++; 
   }
   return i; 
}

int main()
{
    int a; 
    
    cout << "Podaj liczbe naturalna: " << endl;
    cin >> a; 
    
    cout << najmniejszyNieDzielnik(a); 
}
