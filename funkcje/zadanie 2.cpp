/* Napisz funkcję: double potega(double x, int d)
która oblicza x w potędze d (d może być ujemne). */ 

#include <iostream> 
#include <cmath>
using namespace std; 

double potega(double x, int d)
{
    double iloczyn = 1; 
    
    if(d>0)
    {
        for(int i=1; i<=d; i++)
        {
            iloczyn=iloczyn*x; 
        }
            return iloczyn; 
    }
    else if(d==0)
    {
        return 1; 
    }
    else 
    {
        for(int i=1; i<=abs(d); i++)
        {
            iloczyn=iloczyn*(1/x); 
        }
        return iloczyn; 
    }
}


int main()
{
    double x,d; 
    
    cout << "Podaj podstawe potegi: " << endl; 
    cin >> x; 
    
    cout << "Podaj wykladnik potegi: " << endl; 
    cin >> d; 
    
    cout << potega(x,d); 
}
