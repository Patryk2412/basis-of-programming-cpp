/* 10. Napisz program, w którym użytkownik podaje na początku jedną liczbę n - stanowi ona rozmiar 
tablicy, którą należy utworzyć (przypomnij sobie dynamiczne tworzenie tablic, jest to 
konieczne jeśli rozmiar tablicy jest określany dopiero w trakcie działania programu). Następnie tablica 
ma zostać wypełniona kolejnymi wielokrotnościami liczby 2,3 lub 5 w zależności od wyboru 
dokonanego przez użytkownika, a jej zawartość należy wyświetlić na ekranie w sposób jaki 
przedstawiono poniżej (nawiasy kwadratowe i przecinki w odpowiednich miejscach). Następnie, jeśli 
rozmiar tablicy (liczba elementów) jest liczbą nieparzystą, to program ma obliczyć iloczyn wszystkich 
elementów tablicy opatrzonych indeksami nieparzystymi. Jeśli rozmiar tablicy jest liczbą parzystą, to 
wartość każdego elementu tablicy o indeksie parzystym ma zostać zastąpiona wartością elementu o 
indeksie o 1 większym. Przetestuj działanie programu dla różnych wprowadzonych danych. */ 

#include <iostream>
using namespace std; 

int main()
{
    int rozmiar, wybor; 
    
    cout << "Podaj rozmiar tablicy: " << endl; 
    cin >> rozmiar; 
    
    int *tab = new int[rozmiar]; 
    
    cout << "Wielokrotnościami której liczby ma być wypełniona tablica? Do wyboru: 2,3,5. " << endl;
    cin >> wybor; 
    
    switch(wybor)
    {
        case 2: 
        
            for(int i=0; i<rozmiar; i++)
            {
                tab[i]=2+2*i; 
            }
            break; 
    
        case 3: 
            
            for(int i=0; i<rozmiar; i++)
            {
                tab[i]=3+3*i; 
            }
            break; 
            
        case 5: 
        
            for(int i=0; i<rozmiar; i++)
            {
                tab[i]=5+5*i; 
            }
            break; 
            
        default: 
        
        cout << "Niepoprawny wybór. "; 
        delete[] tab; 
        return 0; 
    }        
    
        cout << "Tablica: ["; 
    
        for(int i=0; i<rozmiar; i++)
        {
            cout << tab[i]; 
            
            if(i<rozmiar-1)
            {
                cout << ", "; 
            }
        }
        
        cout << "]" << endl; 
        
        // jeśli rozmiar tablicy jest liczbą nieparzystą, to program ma obliczyć 
        // iloczyn wszystkich elementów tablicy opatrzonych indeksami nieparzystymi.
        
        int iloczyn=1; 
        
        if(rozmiar%2!=0)
        {
            cout << "Tablica ma rozmiar nieparzysty. " << endl; 
            
            for(int i=1; i<rozmiar; i=i+2)
            {
                iloczyn=iloczyn*tab[i]; 
            }
            cout << "Iloczyn elementów indeksów nieparzystych: " << iloczyn << endl; 
        }
        // Jeśli rozmiar tablicy jest liczbą parzystą, to wartość każdego elementu
        // tablicy o indeksie parzystym ma zostać zastąpiona wartością elementu o indeksie o 1 większym.
        
        else
        {
            cout << "Tablica ma rozmiar parzysty. Tablica po zmianie: " << endl << "["; 
            
            for(int i=0; i<rozmiar; i=i+2)
            {
                tab[i]=tab[i+1]; 
            }
            
            for(int i=0; i<rozmiar; i++)
            {
                cout << tab[i];
                
                if(i<rozmiar-1)
                {
                    cout << ", "; 
                }
            }
            cout << "]"; 
        }
        
        delete[] tab;
        return 0; 
}
