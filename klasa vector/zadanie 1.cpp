/* 1. Napisać funkcję:
void rejestr()
która wczytuje liczby z klawiatury aż zostanie wpisane 0. Następnie drukuje
wszystkie te liczby na ekranie. KZ */ 

#include <iostream>
#include <vector> 
using namespace std;

void rejestr() 
{
    vector<int> v; 
    int liczba; 
    
    while(true)
    {
        cout << "Podaj liczbę: " << endl; 
        cin >> liczba; 
        
        if(liczba==0)
        {
            break; 
        }
        else
        {
            v.push_back(liczba); 
        }
    }
    
    cout << "Podane liczby: "; 
    
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " "; 
    }
}

int main() 
{
    rejestr();
}
