/* Utwórz tablicę 2D o wymiarach 6 x 6 (6 wierszy i 6 kolumn) i wypełnij ją kolejnymi liczbami 
naturalnymi zaczynając od 1. Wyświetl tę tablicę na ekranie w odpowiedniej postaci (6 wierszy i 6 
kolumn). Następnie dla każdej kolumny
 podaj różnicę elementów z samej góry i samego dołu. 
Wyświetl te wartości na ekranie pod odpowiednimi kolumnami. */ 

#include <iostream>
using namespace std; 
int main()
{
    int tab[6][6]; 
    int liczba=1; 
    
    //Wypełniam tablicę kolejnymi liczbami naturalnymi
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            tab[i][j]=liczba; 
            liczba++; 
            cout << tab[i][j] << "\t"; 
        }
        cout << endl; 
    }
    
    //Obliczam różnicę i wyświetlam różnicę
    for(int i=5; i>=0; i--)
    {
        cout << tab[5][i]-tab[0][i] << "\t"; 
    }
}
