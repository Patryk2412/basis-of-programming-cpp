/* 2. Napisać funkcję:
vector<int> czynniki(int n)
która zwraca tablicę z czynnikami pierwszymi liczby n. */ 

#include <iostream>
#include <vector>
using namespace std;

vector<int> czynniki(int n) 
{
    vector<int> v;
    int dzielnik = 2;

    while (n > 1) 
    {
        while (n % dzielnik == 0) 
        {  // Dopóki n jest podzielne przez dzielnik
            v.push_back(dzielnik);
            n = n/dzielnik;
        }
        dzielnik++;
    }
    return v;
}

int main() 
{
    int liczba;
    cout << "Podaj liczbę którą chcesz rozłożyć na czynniki pierwsze: ";
    cin >> liczba;

    vector<int> v = czynniki(liczba);

    cout << "Czynniki pierwsze: ";
    
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " "; 
    }

    return 0;
}
