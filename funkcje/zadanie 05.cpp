/* Napisać funkcję
int dwumian(int n, int k)
która oblicza dwumian Newtona. */ 

#include <iostream>
using namespace std; 

int dwumian(int n, int k)
{
    int iloczyn1=1; 
    int iloczyn2=1; 
    int iloczyn3=1; 
    
    for(int i=1; i<=n; i++)
    {
        iloczyn1=iloczyn1*i;
    }
    
    for(int i=1; i<=(n-k); i++)
    {
        iloczyn2=iloczyn2*i; 
    }
    
    for(int i=1; i<=k; i++)
    {
        iloczyn3=iloczyn3*i; 
    }
    
    return iloczyn1/(iloczyn2*iloczyn3); 
}



int main()
{
    int n, k; 
    
    cout << "Podaj liczbe n: " << endl; 
    cin >> n; 
    
    cout << "Podaj liczbe k: " << endl; 
    cin >>k; 
    
    cout << dwumian(n,k); 
    
     
}
