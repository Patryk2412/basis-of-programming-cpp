/* Napisać funkcję int sumaKwadratow(int n) która zwraca sumę kwadratów liczb 1,2, … , n. */
#include <iostream> 
using namespace std;
int sumaKwadratow (int n)
{
    int suma=0; 
    for(int i=1; i<=n; i++)
    {
        suma=suma+i*i; 
    }
    return suma; 
    }
int main()
{
    int n;
    cout << "Podaj liczbe: " << endl;
    cin >>n; 
    cout << "Suma kwadratów liczb 1,2,...,n wynosi: " <<  sumaKwadratow(n);   
}


