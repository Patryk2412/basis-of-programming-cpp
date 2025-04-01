/* Zaimplementować klasę Napis, której obiekty reprezentują napisy.
Metody publiczne:
Napis();
Tworzy nowy pusty napis.
Napis(char* s);
Tworzy nowy napis o podanej treści.
void dolacz(char znak);
Dołącza na koniec napisu podany znak.
char znak(int pozycja);
Zwraca znak na podanej pozycji.
void wypisz();
Wypisuje napis na strumień cout. */

#include <iostream>
#include <string>
using namespace std;

class Napis 
{
    private:
    string str;
    
    public:
    Napis() 
    {
        str = "";
    }
    
    Napis(char* s) 
    {
        for (int i = 0; s[i] != '\0'; i++) 
        {
            str = str + s[i];
        }
    }
    
    void dolacz(char znak) 
    {
        str = str + znak;
    }
    
    char znak(int pozycja) 
    {
        if (pozycja >= 0 && pozycja < str.size()) 
        {
            return str[pozycja];
        } else 
        {
            return '\0'; 
        }
    }
    
    void wypisz() 
    {
        cout << str << endl;
    }
};

int main()
{
    Napis n("Hello"); 
    cout << "Nasz napis: "; 
    n.wypisz();
    cout << endl << "Po dołączeniu znaku: ";
    n.dolacz('!');
    n.wypisz();
    cout << endl;
    cout << "Znak na pozycji 1: " << n.znak(1) << endl;
}
