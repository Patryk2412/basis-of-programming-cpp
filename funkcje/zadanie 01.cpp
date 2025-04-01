 /* Napisać funkcję int najmniejszyNieDzielnik(int n) która zwraca najmniejszą liczbę naturalną, która nie jest dzielnikiem n. */
#include <iostream> 
using namespace std;
int najmniejszyNieDzielnik(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(n%i!=0)
        {
            return i;
        }
    }
}
int main()
{
    int n;
    cout << "Podaj liczbe: " << endl;
    cin >>n;  
    cout << "Najmniejszy nieDzielnik liczby " <<n<< " wynosi: " << najmniejszyNieDzielnik(n);   
}
