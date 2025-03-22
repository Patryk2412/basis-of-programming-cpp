/* Zadanie 4 – Kopiowanie tablicy dynamicznej

Napisz funkcję skopiujTablice(int* tab, int rozmiar), która skopiuje tablicę dynamiczną do nowej.
Pamiętaj, że w C++ zwykłe przypisanie nowaTab = staraTab; NIE KOPIUJE tablicy, tylko adres!
Polecenie:

1. Stwórz dynamiczną tablicę w main().
2. Wypełnij ją wartościami np. tab[i] = i + 1.
3. Wywołaj funkcję skopiujTablice(), która stworzy nową dynamiczną tablicę o tym samym rozmiarze i skopiuje wartości.
4  Wyświetl obie tablice, żeby sprawdzić, czy kopiowanie działa.
5. Zwolnij pamięć dla obu tablic (delete[]). */ 

#include <iostream>
using namespace std; 

int* skopiujTablice(int* tab, int rozmiar)
{
    int* nowa_tablica = new int[rozmiar]; 
    
    for(int i=0; i<rozmiar; i++)
    {
        nowa_tablica[i]=tab[i]; 
    }
    return nowa_tablica; 
}

int main()
{
    int n; 
    
    cout << "Podaj rozmiar tablicy: " << endl;
    cin >> n; 
    
    int* tablica = new int[n]; 
    
    for(int i=0; i<n; i++)
    {
        tablica[i]=i+1; 
    }
    
    int* kopia = skopiujTablice(tablica, n); 
    
    cout << "Oryginalna tablica: " << endl; 
    
    for(int i=0; i<n; i++)
    {
        cout << tablica[i] << " "; 
    }
    
    cout << endl << "Skopiowana tablica: " <<endl; 
    
    for(int i=0; i<n; i++)
    {
        cout << kopia[i] << " "; 
    }
    
    delete[] tablica; 
    delete[] kopia; 
}
