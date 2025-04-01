/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*  Stwórz klasę Pociąg, której obiekty obsługują rezerwacje miejsc w pociągu.
Pociąg składa się z ustalonej liczby wagonów (pod numerami od 0), w każdym wagonie jest jednakowa liczba miejsc (ustalona w konstruktorze).
Nie musimy pamiętać, które miejsca w wagonie są zarezerwowane lub wolne, tylko ile jest zarezerwowanych.

Metody publiczne:
Pociąg(int ileWagonów, int ileMiejsc); – Tworzy pociąg o zadanej liczbie wagonów i liczbie miejsc w każdym wagonie.
int rezerwuj(); – Rezerwuje jedno miejsce w dowolnym wagonie i zwraca numer tego wago
nu.
Jeśli w pociągu nie ma żadnych wolnych miejsc, zwraca -1.
bool rezerwuj(int w); – Rezerwuje jedno miejsce w wagonie w i zwraca true.
Jeśli to niemożliwe (wagon jest pełny), zwraca false.
int rezerwujGrupe(int ile); – Jeśli to możliwe, rezerwuje ile miejsc w jednym z wagonów i zwraca numer tego wagonu.
Jeśli w żadnym wagonie nie ma wystarczającej liczby miejsc, zwraca -1.
void usun(int w); – Usuwa wszystkie rezerwacje miejsc w wagonie w.
int ileWolnych(); – Zwraca liczbę wolnych miejsc w pociągu. */ 

#include <iostream> 
#include <vector>
using namespace std; 

class Pociag
{
    private: 
    int wag; // ilość wagonów
    int mie; // ilość miejsc w wagonie
    vector<int> rezerwacje; // wektor przechowujący liczbę zarezerwowanych miejsc w i-tym wagonie
    
    
    public: 
    Pociag(int ileWagonow, int ileMiejsc); 
    int rezerwuj(); 
    bool rezerwuj(int w); 
    int rezerwujGrupe(int ile); 
    void usun(int w); 
    int ileWolnych(); 
}; 

Pociag::Pociag(int ileWagonow, int ileMiejsc)
{
    wag = ileWagonow;
    mie = ileMiejsc;
    rezerwacje = vector<int> (ileWagonow, 0); // wypełniamy wektor "rezerwacje" ilością wagonów ileWagonow 
}                                             // oraz w każdym wagonie na początek 0 zarezerwowanych miejsc.

int Pociag::rezerwuj()
{
    for (int i = 0; i < wag; i++) 
    {
            if (rezerwacje[i] < mie) // rezerwacje[i] - ilość zarezerwowanych miejsc w i-tym wagonie
            {
                rezerwacje[i]++; // zwiększamy o 1 liczbę rezerwacji w i-tym wagonie
                return i;
            }
        }
        return -1; 
}

bool Pociag::rezerwuj(int w)
{
    if (w >= 0 && w < wag && rezerwacje[w] < mie) 
    {
            rezerwacje[w]++;
            return true;
    }
        return false; 
}

int Pociag::rezerwujGrupe(int ile)
{
     
        for (int i = 0; i < wag; i++) 
        {
            if (mie - rezerwacje[i] >= ile) {
                rezerwacje[i] += ile;
                return i;
            }
        }
        return -1;
}

void Pociag::usun(int w)
{
    if (w >= 0 && w < wag) 
    {
            rezerwacje[w] = 0;
    }
}

int Pociag::ileWolnych()
{
    int suma = 0;
        for (int i = 0; i < wag; i++) 
        {
            suma += mie - rezerwacje[i];
        }
        return suma;
}

int main()
{
    Pociag pociag(5, 10);
    cout << "Rezerwacja miejsca w dowolnym wagonie: " << pociag.rezerwuj() << endl;
    cout << "Rezerwacja miejsca w wagonie 2: " << pociag.rezerwuj(2) << endl;
    cout << "Rezerwacja grupy 3 miejsc: " << pociag.rezerwujGrupe(3) << endl;
    cout << "Liczba wolnych miejsc: " << pociag.ileWolnych() << endl;
    pociag.usun(2);
    cout << "Liczba wolnych miejsc po usunieciu rezerwacji w wagonie 2: " << pociag.ileWolnych() << endl;
    return 0;
}