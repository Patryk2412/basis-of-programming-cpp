/* Napisać funkcję:
int f(int *t, int r); ALBO int f(const vector<int>& t); 
która zwraca liczbę niepowtarzalnych elementów tablicy t o rozmiarze r. Np. f({1,2,3,2,3,3}, 6)=1, f({1,7,7,1}, 4)=0. 
Uwaga: nie należy zmieniać zawartości tablicy! */ 

#include <iostream>
#include <vector>
using namespace std;

int f(const vector<int>& t) 
{
    int unikalne = 0;
    int rozmiar = t.size();

    for (int i = 0; i < rozmiar; ++i) 
    {
        bool powtorzony = false;

        for (int j = 0; j < rozmiar; ++j) 
        {
            if (i != j && t[i] == t[j]) 
            {
                powtorzony = true;
                break;
            }
        }
        if (!powtorzony) 
        {
            unikalne++;
        }
    }
    return unikalne;
}

int main() {
    vector<int> t1 = {1, 2, 3, 2, 3, 3};
    vector<int> t2 = {1, 7, 7, 1};

    cout << "Liczba niepowtarzalnych w t1: " << f(t1) << endl;
    cout << "Liczba niepowtarzalnych w t2: " << f(t2) << endl;
    return 0;
}
