//Napisz funkcję int liczbaLiterA(const string &s), która zwróci liczbę wystąpień litery 'a' w napisie.

#include <iostream>
#include <string>

using namespace std;

int liczbaLiterA(const string &s)
{
    int dlugosc=s.size(); 
    int ile=0; 
    
    for(int i=0; i<dlugosc; i++)
    {
        if(s[i]=='a' || s[i]=='A')
        {
            ile++; 
        }
    }
    return ile; 
}

int main() 
{
    string napis; 
    
    cout << "Podaj napis: " << endl; 
    cin >> napis;
    cout << "Liczba wystąpień znaku a w podanym napsie: "; 
    cout << liczbaLiterA(napis); 
}
