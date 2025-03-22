/* 6. Napisać funkcję int pierwiastki(double a, double b, double c)
która drukuje pierwiastki wielomianu ax2+bx+c. Wynikiem powinna być liczba
pierwiastków. */ 

#include <iostream>
#include <cmath>

using namespace std;

int pierwiastki(double a, double b, double c)
{
    double delta;
    delta=b*b-4*a*c;
    
    if(delta>0)
    {
        cout << "pierwiastki podanego trójmianu: " << ((-1)*b+sqrt(delta))/(2*a) << ", " << ((-1)*b-sqrt(delta))/(2*a)<< endl; 
        cout << "Liczba pierwiastków podanego trójmianu: "; 
        return 2;
    
    }
    else if(delta==0)
    {
        cout << "pierwiastek podanego trójmianu: " << ((-1)*b/(2*a)) << endl;
        cout << "Liczba pierwiastków podanego trójmianu: "; 
        return 1;
    }
    else
    {
        cout << "Podany trójmian nie ma pierwiastków. " << endl; 
        cout << "Liczba pierwiastków podanego trójmian: "; 
        return 0; 
    }
}

int main()
{
    double a, b, c;
    
    cout << "Podaj liczbe a: " << endl; 
    cin >>a; 
    
     cout << "Podaj liczbe b: " << endl; 
    cin >>b; 
    
     cout << "Podaj liczbe c: " << endl; 
    cin >>c; 
    
    cout << "Podany trójmian ma postać: " << "y=" <<a<<"x^2+"<<b<<"x+"<<c << endl;
    cout << pierwiastki(a,b,c);
}
