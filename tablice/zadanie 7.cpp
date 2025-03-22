/* Napisz program, w którym utworzysz tablicę o wymiarach 5 x 5 i wypełnisz ją liczbami w następujący sposób: pierwszy wiersz należy wypełnić kolejnymi liczbami naturalnymi od 1 do 5. Następnie w każdej kolumnie element znajdujący się niżej stanowi wynik mnożenia elementu znajdującego się wyżej przez liczbę równą: 5 - indeks obecnej kolumny. Następnie program ma znaleźć maksymalny i minimalny element dla każdego wiersza oraz sumę elementów znajdujących się na jednej i drugiej przekątnej tablicy. Program powinien wyświetlić na ekranie stworzoną tablicę, maksymalne i minimalne elementy dla każdego wiersza i sumy elementów leżących na przekątnych. */
#include <iostream> 
using namespace std; 
int main()
{
    int tab[5][5]; 
    
    for(int i=0; i<5; i++)
    {
        tab[0][i]=1+i; 
        cout << tab[0][i] << " "; 
    }
    
    cout << endl; 
    
    int liczba=0;
    int mnoznik=5; 
    
    for(int i=1; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            tab[i][j]=(5-j)*tab[i-1][j]; 
            cout << tab[i][j] << " "; 
        }
        cout << endl; 
    }
    
    // Szukamy wartości minimalnych i maksymalnych dla każdego wiersza
    
    cout << endl;  
    
    for(int i=0; i<5; i++)
    {
        int maks = tab[i][0]; 
        int min= tab[i][0];
        
        for(int j=0; j<5; j++)
        {
            if(tab[i][j]>maks)
            {
               maks=tab[i][j]; 
            }
            else if(tab[i][j]<min)
            {
                min=tab[i][j]; 
            }
        }
    
        cout<< "Maks i min w wierszu " << i+1 << ": " << maks << " i " << min << endl; 
    }
    
    // Suma elementów na przekątnych 
    
    int suma1=0, suma2=0; 
    
    for(int i=0; i<5; i++)
    {
        suma1=suma1+tab[i][i]; 
        suma2=suma2+tab[4-i][i]; 
    }
    
    cout << endl; 
    cout << "Suma elementów przekątnej zaczynając od lewego górnego elementu: " << suma1 << endl; 
    cout << "Suma elementów przekątnej zaczynając od praweego górnego elementu: " << suma2 << endl; 
}
