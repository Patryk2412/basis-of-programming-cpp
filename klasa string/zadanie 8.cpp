/* 3. Napisać funkcję:
Napisać funkcję
string odwroc(string s)
która zwraca napis czytany od końca. */ 

#include <iostream>
using namespace std;

string odwroc(string s)
{
    string wynik = ""; 
    for(int i=s.size()-1; i>=0; i--)
    {
        wynik=wynik+s[i]; 
    }
    return wynik; 
}

int main() 
{
    string napis; 
    
    cout << "Wprowadź napis: " << endl; 
    
    getline(cin, napis); 
    
    cout << "Wprowadzony napis: " << endl;
    cout << napis << endl; 
    
    cout << "Odwrócony napis: " << endl; 
    cout << odwroc(napis); 
}
