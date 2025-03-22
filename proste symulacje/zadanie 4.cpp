/* 2. Duży Lotek 
Napisz program, który wylosuje (losowo!) 6 liczb całkowitych bez powtórzeń z zakresu od 1 do 49 i 
wypisze je na ekran. */ 

#include <iostream>
using namespace std; 
int main()
{
    srand(time(0)); 
    
    int liczba; 
    bool powt; 
    int tab[6]; 
    
    cout << "Wynik losowania: "; 
    
    for(int i=0; i<6; i++)
    {
        do
        {
            powt=false; 
            liczba=1+rand()%49; 
            
            for(int j=0; j<i; j++)
            {
                if(tab[j]==liczba)
                {
                    powt=true; 
                    break; 
                }
            }
            
        }while(powt==true); 
        
        tab[i]=liczba; 
        cout << tab[i] << " "; 
    }
}
