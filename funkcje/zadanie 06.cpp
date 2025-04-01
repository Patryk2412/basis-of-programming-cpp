/* Napisać funkcję void trojkatyProstokatne(int n)
która wypisuje na ekranie wszystkie trójki liczb (a,b,c) takie że 0<a<b<c<n
oraz a2+b2=c2
*/

#include <iostream>
#include <cmath>

using namespace std;

void trojkatyProstokatne(int n)
{
    int a, b, c;
    
    for(int c=1; c<n; c++)
    {
        for(int b=1; b<c; b++)
        {
            for(int a=1; a<b; a++)
            {
                if(a*a+b*b==c*c)
                {
                    cout << "Trójki możliwych liczb: " << a <<", "<<b<<", "<<c << endl; 
                }
            }
        }
    }
    
}

int main()
{
    int n; 
    
    cout << "Podaj liczbe n: " << endl;
    cin >> n; 
    
    
    trojkatyProstokatne(n); 
    
    
}
