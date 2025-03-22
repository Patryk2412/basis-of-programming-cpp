/* 1. Zaimplementować klasę Pomiary, która przechowuje wykonywane pomiary (liczby
całkowite) i umożliwia odczyt pewnych wartości statystycznych.
Metody publiczne:
Pomiary();
Tworzy nowy pusty obiekt (nie zawierający żadnych pomiarów.
void dodaj(int wartosc);

Rejestruje nowy pomiar o podanej wartości.
int ilePomiarow();
Zwraca liczbę zarejestrowanych pomiarów.
double srednia();
Zwraca średnią wartość wszystkich zarejestrowanych pomiarów.
int najwiekszy();
Zwraca wartość największego zarejestrowanego pomiaru.
*/

#include <iostream>
#include <vector>
using namespace std; 

class Pomiary
{
    private:
    vector<int> pomiary; 
    
    public: 
    Pomiary(); 
    void dodaj(int wartosc);
    int ilePomiarow(); 
    double srednia(); 
    int najwiekszy(); 
}; 

Pomiary::Pomiary()
{
    
}

void Pomiary::dodaj(int wartosc)
{
    pomiary.push_back(wartosc); 
}

int Pomiary::ilePomiarow()
{
    int ile=pomiary.size(); 
    return ile; 
}

double Pomiary::srednia()
{
    if(pomiary.empty())
    {
        return 0; 
    }
    else
    {
        double suma=0; 
        for(int i=0; i<pomiary.size(); i++)
        {
            suma=suma+pomiary[i]; 
        }
        return suma/pomiary.size(); 
    }
}

int Pomiary::najwiekszy()
{
    int maks=pomiary[0]; 
    
    for(int i=0; i<pomiary.size(); i++)
    {
        if(pomiary[i]>maks)
        {
            maks=pomiary[i]; 
        }
    }
    return maks; 
}

int main()
{
    Pomiary p; 
    
    //Dodajemy pomiary: 
    p.dodaj(5); 
    p.dodaj(7); 
    p.dodaj(3); 
    
    cout << "Liczba pomiarów: " << p.ilePomiarow() << endl; 
    cout << "Średnia z pomiarów: " << p.srednia() << endl; 
    cout << "Największy z pomiarów: " << p.najwiekszy() << endl;
}
