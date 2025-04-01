/* Napisz program, w którym stworzysz klasę Pracownik, a w niej: - publiczną zmienną typu string, która będzie przechowywała imię
pracownika, - publiczną zmienną typu string, która będzie przechowywała nazwisko pracownika, - prywatną zmienną typu int, 
która będzie przechowywała pensję pracownika, - chronioną (protected) zmienną typu bool o nazwie aktywny, która będzie 
przechowywała informację czy dana osoba jest aktywnym pracownikiem. 
Zmienną aktywny proszę zainicjalizować w klasie wartością true. 
Proszę utworzyć następujące funkcje składowe (metody) klasy Pracownik: - funkcję o nazwie wpisz, która przyjmuje 
trzy argumenty: pierwszy z nich ma być przypisany do zmiennej przechowującej imię pracownika, drugi do zmiennej przechowującej 
jego nazwisko, a trzeci do zmiennej przechowującej jego pensję; - funkcję o nazwie pokaz (bezargumentowa), 
która wyświetli na ekranie imię, nazwisko i pensję danego pracownika oraz wypisze na ekran informację czy dana osoba jest aktywnym 
pracownikiem (np. w postaci Aktywny: tak - jeśli jest aktywny i Aktywny: nie - jeśli nie jest on 
aktywny); - funkcję o nazwie porownaj przyjmującą jako argument obiekt typu Pracownik. Funkcja ma 
za zadanie porównać pensję pracownika, na którym wywołujemy tę funkcję z pensją pracownika, 
który jest argumentem tej funkcji. Funkcja powinna wyświetlić na ekranie informację, który z 
pracowników zarabia więcej (w postaci: Jan Kowalski zarabia więcej niż Tomasz Nowak), jeśli ich zarobki są takie same, 
to taka informacja również powinna wyświetlić się na ekranie. - funkcję o nazwie podwyzka, przyjmującą jeden 
argument typu int, który jest wartością podwyżki, jaką dostanie pracownik, na którym zostanie wywołana ta funkcja. 
Funkcja ma zwracać wartość pensji danego pracownika już po otrzymaniu przez niego podwyżki. 
W funkcji main() proszę stworzyć kilka obiektów klasy Pracownik, przypisać im wybrane przez siebie 
wartości zmiennych za pomocą funkcji wpisz, wyświetlić na ekranie ich dane za pomocą funkcji pokaz 
oraz przetestować działanie stworzonych funkcji porownaj i podwyzka. */ 

#include <iostream>
using namespace std; 

class Pracownik
{
    public: 
    string imie, nazwisko; 
    
    void wpisz(string a, string b, int c); 
    void pokaz(); 
    void porownaj(Pracownik p); 
    int podwyzka(int podw); 
    
    private: 
    int pensja; 
    
    protected: 
    bool aktywny=true; 
    
}; 

void Pracownik::wpisz(string a, string b, int c)
{
    imie=a; 
    nazwisko=b; 
    pensja=c; 
}

void Pracownik::pokaz()
{
    cout << "Dane pracownika: " << endl;
    cout << "Imię: " << imie << endl; 
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Pensja: " << pensja << endl; 
    if(aktywny==true)
    {
        cout << "Aktywny: tak " << endl;  
    }
    else
    {
        cout << "Aktywny: nie " << endl; 
    }
    cout << endl; 
}

void Pracownik::porownaj(Pracownik p)
{
    if(pensja>p.pensja)
    {
        cout << imie << " " << nazwisko << " zarabia więcej niż " << p.imie << " " << p.nazwisko << endl; 
    }
    else if(pensja<p.pensja)
    {
        cout << imie << " " << nazwisko << " zarabia mniej niż " << p.imie << " " << p.nazwisko << endl;
    }
    else 
    {
        cout << imie << " " << nazwisko << " zarabia tyle samo co " << p.imie << " " << p.nazwisko << endl;
    }
    
}

int Pracownik::podwyzka(int podw)
{
    cout << "Pensja po podwyżce pracownika " << imie << " " << nazwisko << " wynosi: "; 
    return pensja+podw; 
}

int main()
{
    Pracownik p1, p2, p3, p4;
    
    p1.wpisz("Bartosz", "Kurek", 5000); 
    cout << "Dane 1 pracownika: " << endl; 
    p1.pokaz(); 
    
    p2.wpisz("Basia", "Kawka", 5500); 
    cout << "Dane 2 pracownika: " << endl; 
    p2.pokaz(); 
    
    p3.wpisz("Karol", "Nowak", 9000); 
    cout << "Dane 3 pracownika: " << endl; 
    p3.pokaz(); 
    
    p4.wpisz("Adam", "Kowal", 7100); 
    cout << "Dane 4 pracownika: " << endl; 
    p4.pokaz(); 
    
    p1.porownaj(p2); 
    p3.porownaj(p4); 
    
    cout << p1.podwyzka(1000); 
}
