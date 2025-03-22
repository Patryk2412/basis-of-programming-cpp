/* zadanie. Tablica i mnożnik. */ 

#include <iostream> 
using namespace std;

void mnozenie (int tab[], int rozmiar,  int mnoznik)
{
    
    cout << "Tablica pierwotna: " << endl;
    
    for(int i=0; i<rozmiar; i++)
    {
        tab[i]=2+2*i;
        cout << tab[i] << " "; 
    }
    
     cout << endl;
     
     cout << "Tablica po przemnozeniu: " << endl;
     
     for(int i=0; i<rozmiar; i++)
     {
         tab[i]=tab[i]*mnoznik;
         cout << tab[i] << " "; 
     }
}


int main()
{
    int rozmiar, mnoznik; 
    
    cout << "Podaj rozmiar tablicy: " << endl;
    cin>>rozmiar; 
    
    int tab[rozmiar];
    
    cout << "Podaj mnoznik: " << endl;
    cin >> mnoznik;
     
    mnozenie(tab, rozmiar, mnoznik);
    
}
