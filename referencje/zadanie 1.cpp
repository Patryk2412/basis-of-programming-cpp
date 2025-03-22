/* Funkcja modyfikująca tablicę
Napisz funkcję zwiekszTablice(int tab[], int n), która zwiększa każdą liczbę w tablicy o 1.
Wskazówka: Tablice w C++ są domyślnie przekazywane jako wskaźniki, więc nie musisz używać &. */ 

#include <iostream>
using namespace std; 
void zwiekszTablice(int tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        tab[i]=tab[i]+1; 
    }
}

int main()
{   
   int rozmiar; 
   cout << "Podaj rozmiar tablicy: " << endl; 
   cin >> rozmiar;  
   int *t = new int[rozmiar]; 
   
   cout << "Tablica przed zmianą: "; 
   for(int i=0; i<rozmiar; i++)
   {
       t[i]=1+i; 
       cout << t[i] << " "; 
   }
   
   cout << endl << "Tablica po zmianie: "; 
   zwiekszTablice(t, rozmiar); 
   
   for(int i=0; i<rozmiar; i++)
   {
       cout << t[i] << " "; 
   }
   delete[] t; 
}
