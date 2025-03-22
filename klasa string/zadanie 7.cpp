/* Napisz funkcję bool znajdzSlowo(const string &tekst, const string &slowo), 
która zwróci true, jeśli slowo znajduje się w tekst, oraz false w przeciwnym wypadku. */
#include <iostream>
#include <string>
using namespace std; 
bool znajdzSlowo(const string &tekst, const string &slowo)
{
    size_t pozycja = tekst.find(slowo); 
    
    if (pozycja != string::npos)  
    {
        return true; 
    }
    else 
    {
        return false; 
    }
}

int main()
{
    string napis;
    string wyraz; 
    
    cout << "Podaj tekst: ";
    getline(cin, napis); // 
    
    cout << "Podaj słowo, które chcesz sprawdzić: ";
    cin >> wyraz; 
    
    // Wynik w czytelnej formie
    if (znajdzSlowo(napis, wyraz))
        cout << "Słowo \"" << wyraz << "\" znajduje się w tekście." << endl;
    else
        cout << "Słowo \"" << wyraz << "\" NIE znajduje się w tekście." << endl;
    
    return 0;
}
