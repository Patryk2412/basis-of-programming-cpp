// Napisz program, który sprawdzi, czy dany napis to palindrom.

#include <iostream>
using namespace std; 
int main()
{
    string napis; 
    int liczba=0; 
    
    cout << "Podaj napis: " << endl;
    cin >> napis; 
    
    int dlugosc=napis.length();
    for(int i=0; i<dlugosc; i++)
    {
        if(napis[i]==napis[dlugosc-1-i])
        {
            liczba++; 
        }
    }
    if(liczba==dlugosc)
    {
        cout << "Podany napis jest palindromem." << endl; 
    }
    else
    {
        cout << "Podany napis nie jest palindromem." << endl; 
    }
     return 0;    
}
