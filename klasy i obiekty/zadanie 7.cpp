/* 4. Zaimplementować klasę Wektor, której obiekty reprezentują n-wymiarowe wektory o współrzędnych double.

Metody publiczne:

Wektor(int wymiar)
Tworzy wektor o podanym wymiarze (wszystkie współrzędne są równe 0).

void ustaw(int k, double wartosc)
Ustawia k-tą współrzędną na podaną wartość.

double wsp(int k)
Zwraca k-tą współrzędną.

double dlugosc()
Zwraca długość wektora (funkcja sqrt z sumy kwadratów współrzędnych).

Dodatkowo należy przeciążyć operator * tak, aby umożliwić mnożenie wektora przez skalar (double).*/ 

#include <iostream>
#include <vector>
using namespace std; 

class Wektor
{
    private: 
    vector<double> wspolrzedne; 
    
    public: 
    Wektor(int wymiar); 
    void ustaw(int k, double wartosc); 
    double wsp(int k); 
    double dlugosc();
    Wektor operator*(double skalar);
}; 

Wektor::Wektor(int wymiar)
{
    wspolrzedne = vector<double> (wymiar, 0); 
}

void Wektor::ustaw(int k, double wartosc)
{
    if(k>=0 && k<wspolrzedne.size())
    {
        wspolrzedne[k]=wartosc; 
    }
    else
    {
        cout << "Niewłaściwy indeks. "; 
    }
}

double Wektor::wsp(int k)
{
    if(k>=0 && k<wspolrzedne.size())
    {
        return wspolrzedne[k]; 
    }
    else
    {
        cout << "Niewłaściwy indeks. "; 
        return 0; 
    }
}

double Wektor::dlugosc()
{
    double dlugosc;
    double suma=0; 
    
    for(int i=0; i<wspolrzedne.size(); i++)
    {
        suma=suma+wspolrzedne[i]*wspolrzedne[i]; 
    }
    dlugosc=sqrt(suma); 
    return dlugosc; 
}

Wektor Wektor::operator*(double skalar)
{
    Wektor wynik = Wektor(wspolrzedne.size());

    for (int i = 0; i < wspolrzedne.size(); i++) {
        wynik.wspolrzedne[i] = wspolrzedne[i] * skalar;
    }
    return wynik;
}

int main()
{
    Wektor v(3);
    v.ustaw(0, 3);
    v.ustaw(1, 4);
    v.ustaw(2, 0);

    cout << "Długość v: " << v.dlugosc() << endl;

    Wektor u = v * 2;

    cout << "Długość u = v * 2: " << u.dlugosc() << endl;

    return 0;
}
