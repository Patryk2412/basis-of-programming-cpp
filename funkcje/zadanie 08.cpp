/* Napisać funkcję:
int liczba(char* s) albo int a(const string& s);
która zwraca odległość pomiędzy najdalszymi powtarzającymi się znakami w napisie s. 
Jeśli żadne dwa znaki w naoisie nie są jednakowe, należy zwrócić -1. */ 

#include <iostream>
using namespace std;

int liczba(const string& s) 
{
    int max_odl = -1;

    int dlugosc = s.length();

    for (int i = 0; i < dlugosc; i++) 
    {
        for (int j = i + 1; j < dlugosc; j++) 
        {
            if (s[i] == s[j]) {
                int odl = j - i;
                if (odl > max_odl) 
                {
                    max_odl = odl;
                }
            }
        }
    }
    return max_odl;
}

int main() 
{
    string napis = "AABBAADAC";
    cout << "Najdalsza odległość: " << liczba(napis) << endl;
    return 0;
}
