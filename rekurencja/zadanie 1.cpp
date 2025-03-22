// Rekurencja 
#include <iostream>
using namespace std; 

int silnia(int n)
{
    if(n==1)
    {
        return 1; 
    }
    else if(n>1)
    {
        return n*silnia(n-1); 
    }
    
}

int main()
{
    int a; 
    
    cout << "Podaj liczbę całkowitą dodatnią: " << endl; 
    cin >> a; 
    
    cout << "Silnia z liczby: " << a << ": " << silnia(a); 
}
