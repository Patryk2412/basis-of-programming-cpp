/*
Stwórz klasę Las, której obiekty reprezentują drzewa w lesie.
Każde drzewo jest określone przez nazwę gatunku i jego współrzędne (x, y) na płaszczyźnie (typu double).

Metody publiczne:
Las(); – Tworzy pusty las.
void posadz(double x, double y, string gatunek); – Sadzi drzewo gatunku gatunek o współrzędnych (x, y).
Można założyć, że w jednym miejscu nie ma żadnego drzewa.
int ileDrzew(); – Zwraca liczbę drzew w lesie.
int wytnij(double x, double y, double r); – Usuwa wszystkie drzewa podanego gatunku i zwraca liczbę usuniętych drzew. 
int wytnij(string gatunek); – Usuwa wszystkie drzewa podanego gatunku i zwraca ich liczbę.
double minPrzejscie(); – Zwraca odległość pomiędzy dwoma najbliższymi drzewami.
Można założyć, że w lesie są co najmniej dwa drzewa. */ 

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Las 
{
private:
    vector<string> gatunki;
    vector<double> x;
    vector<double> y;

public:
    Las();
    void posadz(double px, double py, const string& gatunek);
    int ileDrzew() const;
    int wytnij(double px, double py, double r);
    int wytnij(const string& gatunek);
    double minPrzejscie() const;
};

Las::Las() {}

void Las::posadz(double px, double py, const string& gatunek) 
{
    gatunki.push_back(gatunek);
    x.push_back(px);
    y.push_back(py);
}

int Las::ileDrzew() const 
{
    return static_cast<int>(x.size());
}

int Las::wytnij(double px, double py, double r) {
    int licznik = 0;
         for (size_t i = 0; i < x.size();) 
        {
        double dist = sqrt(pow(x[i] - px, 2) + pow(y[i] - py, 2));
        if (dist <= r) 
        {
            gatunki.erase(gatunki.begin() + i);
            x.erase(x.begin() + i);
            y.erase(y.begin() + i);
            licznik++;
        }
         else 
        {
            i++;
        }
    }
    return licznik;
}

int Las::wytnij(const string& gatunek) 
{
    int licznik = 0;
    for (size_t i = 0; i < gatunki.size();) 
    {
        if (gatunki[i] == gatunek) {
            gatunki.erase(gatunki.begin() + i);
            x.erase(x.begin() + i);
            y.erase(y.begin() + i);
            licznik++;
        } else {
            i++;
        }
    }
    return licznik;
}

double Las::minPrzejscie() const {
    if (x.size() < 2) return 0.0;
    double minDist = sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2));
    for (size_t i = 0; i < x.size(); ++i) {
        for (size_t j = i + 1; j < x.size(); ++j) {
            double dist = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }
    return minDist;
}

