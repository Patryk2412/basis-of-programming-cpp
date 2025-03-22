/* 
Napisz program, który wylosuje (losowo!) 6 liczb całkowitych bez powtórzeń z zakresu od 1 do 49 i 
wypisze je na ekran. 
Przykładowy wynik działania programu: 
Wynik losowania: 14, 5, 38, 27, 22, 16 */ 

#include <iostream>
using namespace std; 
int main()
{
    srand(time(0)); 
    
    int poczatek=1; 
    
    cout << "Wynik losowania: "; 
    
    for(int i=0; i<6; i++)
    {
        cout << poczatek + rand()%49; 
        if(i<5)
        {
            cout << ", "; 
        }
        else 
        {
            cout << " "; 
        }
    }
}
