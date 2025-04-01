
/* Zaimplementować klasę Osoba, której obiekty przechowują informacje o osobach.
Metody publiczne:
Osoba(char* imie, char* nazwisko);
Tworzy osobę o podanym imieniu i nazwisku.
void ustawWiek(int wiek);
Ustawia wiek osoby.
bool starszaNiz(const Osoba& osoba);
Zwraca true, jeśli osoba jest starsza niż podana jako argument.
bool imiennik(const Osoba& osoba);
Zwraca true, jeśli imiona osób są takie same */ 

#include <iostream>
#include <string>
using namespace std;

class Osoba 
{
private:
    string im;  // Imię
    string naz; // Nazwisko
    int w;      // Wiek

public:
    Osoba(string imie, string nazwisko); 
    void ustawWiek(int wiek);
    bool starszaNiz(const Osoba& osoba);
    bool imiennik(const Osoba& osoba);
    void wypisz();
};

// Konstruktor
Osoba::Osoba(string imie, string nazwisko) 
{
    im = imie;
    naz = nazwisko;
    w = 0; // Domyślnie wiek 0
}

// Metoda ustawiająca wiek
void Osoba::ustawWiek(int wiek) 
{
    w = wiek;
}

// Metoda sprawdzająca, czy osoba jest starsza od innej
bool Osoba::starszaNiz(const Osoba& osoba) 
{
    if (w > osoba.w) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

// Metoda sprawdzająca, czy osoby mają to samo imię
bool Osoba::imiennik(const Osoba& osoba) 
{
   if(im==osoba.im)
   {
       return true; 
   }
   else
   {
       return false; 
   }
}

// Metoda wypisująca dane osoby
void Osoba::wypisz() 
{
    cout << "Imię: " << im << ", Nazwisko: " << naz << ", Wiek: " << w << endl;
}

// Testowanie klasy
int main() 
{
    Osoba osoba1("Jan", "Kowalski");
    Osoba osoba2("Anna", "Nowak");
    Osoba osoba3("Jan", "Nowicki"); // Ma to samo imię co osoba1

    osoba1.ustawWiek(30);
    osoba2.ustawWiek(25);
    osoba3.ustawWiek(40);

    osoba1.wypisz();
    osoba2.wypisz();
    osoba3.wypisz();

    cout << "Czy osoba1 jest starsza niż osoba2? " << (osoba1.starszaNiz(osoba2) ? "Tak" : "Nie") << endl;
    cout << "Czy osoba1 i osoba3 to imiennicy? " << (osoba1.imiennik(osoba3) ? "Tak" : "Nie") << endl;

    return 0;
}
