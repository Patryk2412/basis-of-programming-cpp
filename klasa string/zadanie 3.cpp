/* 15. Napisz program, w którym użytkownik podaje dowolne słowo składające się jedynie z małych liter 
i znaków alfabetu łacińskiego (bez znaków polskich jak ę,ą itp.), a program sprawdza czy podane 
słowo kończy się samogłoską i czy jest palindromem (czytane od lewej do prawej i od prawej do lewej 
brzmi tak samo) i wyświetla stosowne informacje na ekranie. */ 

#include <iostream> 
using namespace std; 
int main()
{
    string slowo; 
    int ile_takich_samych=0; 
    
    cout << "Podaj slowo: " << endl; 
    cin>>slowo; 
    
    int dlugosc = slowo.length(); 
    
    if(slowo[dlugosc-1]=='a' || slowo[dlugosc-1]=='e' || slowo[dlugosc-1]=='i' || slowo[dlugosc-1]=='o' ||
       slowo[dlugosc-1]=='u' || slowo[dlugosc-1]=='y')
       {
           cout << "Podane słowo kończy się samogłoską. " << endl; 
       }
        else
        {
            cout << "Podane słowo nie kończy się samogłoską. " << endl; 
        }
    
        for(int i=0; i<dlugosc/2; i++)
        {
            if(slowo[i]==slowo[dlugosc-1-i])
            {
                ile_takich_samych++; 
            }
            
        }
        
        if(ile_takich_samych==dlugosc/2)
        {
            cout << "Podane slowo jest palindromem. "; 
        }
        else
        {
            cout << "Podane slowo nie jest palindromem. "; 
        }
}
