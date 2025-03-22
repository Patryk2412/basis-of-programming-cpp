/* Napisz program, w którym stworzysz klasę Osoba, a w niej: - publiczną zmienną typu string, która będzie przechowywała 
imię danej osoby, - publiczną zmienną typu int, która będzie przechowywała wiek osoby, - publiczną zmienną typu double,
która będzie przechowywała wzrost osoby (w metrach), - publiczną zmienną typu char, która będzie przechowywała płeć
osoby (‘M’ jeśli jest to mężczyzna i ‘K’ jeśli jest to kobieta). 
Proszę utworzyć następujące funkcje składowe (metody) klasy Osoba: - funkcję wpisz, przyjmującą cztery argumenty: 
pierwszy z nich ma być przypisany do zmiennej przechowującej imię danej osoby, drugi do zmiennej przechowującej jej wiek,
trzeci do zmiennej przechowującej jej wzrost w metrach, czwarty do zmiennej przechowującej jej płeć;
- funkcję wypisz (bezargumentową), która wyświetli na ekranie imię, wiek, wzrost i płeć danej osoby. 
W funkcji main() proszę stworzyć 4 obiekty klasy Osoba, przypisać im wybrane przez siebie wartości 
zmiennych za pomocą funkcji wpisz, a następnie wyświetlić dane na ich temat za pomocą funkcji wypisz. 
Poza klasą Osoba proszę ponadto stworzyć funkcję srednia, przyjmującą cztery argumenty typu 
double, która jako rezultat zwraca średnią arytmetyczną z czterech przekazanych jej argumentów. 
Korzystając z funkcji srednia proszę wyświetlić na ekranie średni wzrost tych czterech utworzonych 
wcześniej osób (egzemplarzy klasy Osoba). */ 

#include <iostream>

using namespace std; 

class Osoba
{
    public: 
    
    string imie; 
    int wiek; 
    double wzrost; 
    char plec; 
    
    void wpisz(string imie, int wiek, double wzrost, char plec); 
    void wypisz(); 
}; 

void Osoba::wpisz(string a, int b, double c, char d)
{
    imie=a; 
    wiek=b; 
    wzrost=c; 
    plec=d; 
}

void Osoba::wypisz()
{
    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Wzrost: " << wzrost << endl; 
    cout << "Plec: " << plec << endl; 
}  

double srednia(double a, double b, double c, double d)
{
    return (a+b+c+d)/4; 
}

int main()
{
    Osoba o1, o2, o3, o4; 
    
    cout << "Dane osoby 1: " << endl;
    o1.wpisz("Ewa", 20, 1.72, 'K'); 
    o1.wypisz(); 
    
    cout <<"Dane osoby 2: " << endl; 
    o2.wpisz("Patryk", 19, 1.79, 'M'); 
    o2.wypisz(); 
    
    cout << "Dane osoby 3: " << endl; 
    o3.wpisz("Kamil", 30, 1.92, 'M'); 
    o3.wypisz(); 
    
    cout << "Dane osoby 4: " << endl; 
    o4.wpisz("Ola", 21, 1.68, 'K'); 
    o4.wypisz(); 
    
    cout << endl; 
    
    cout << "Średni wzrost powyższych osób: " << srednia(o1.wzrost, o2.wzrost, o3.wzrost, o4.wzrost); 
    
}
