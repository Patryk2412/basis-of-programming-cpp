/* Zadanie 3 – Znalezienie pozycji pierwszego wystąpienia znaku w napisie
Napisz funkcję int znajdzPozycje(const string &s, char znak), która zwróci pozycję pierwszego wystąpienia 
znaku znak w napisie s. Jeśli znak nie występuje, funkcja ma zwrócić -1. */ 

#include <iostream>
using namespace std; 

int znajdzPozycje(const string &s, char znak)
{
    int pozycja; 
    
    pozycja=s.find(znak);
    if (pozycja != string::npos)
    {   
        return pozycja; 
    }
    else
    {
        return -1; 
    }
}

int main()
{
    string str; 
    char a; 
    
    cout << "Podaj tekst: " << endl;
    getline(cin, str); 
    cout << "Wprowadzony tekst: " << str << endl; 
    
    cout << "Podaj znak, który chcesz znaleźć w tekście: " << endl; 
    cin >> a; 
    
    cout << "Pierwsza pozycja szukanego znaku: "; 
    cout << znajdzPozycje(str, a); 
}
