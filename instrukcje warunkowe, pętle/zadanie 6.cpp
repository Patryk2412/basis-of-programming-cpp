/* Napisz program, w którym użytkownik podaje dwie liczby naturalne (a i b) , a program wyświetla 
na ekranie wszystkie liczby podzielne przez 4 z przedziału <a, b> oraz podaje ile ich jest. 
Przykładowy wynik działania programu: 
Podaj początek przedziału: 17 
Podaj koniec przedziału: 49 
Liczby podzielne przez 4 z przedziału <17, 49>: 20 24 28 32 36 40 44 48 
Liczb podzielnych przez 4 zawartych w przedziale <17, 49> jest 8. */ 


#include <iostream> 
using namespace std; 
int main()
{
    int a, b, ile=0; 
    
    cout << "Podaj poczatek przedzialu: " << endl; 
    cin >> a; 
    
    cout << "Podaj koniec przedzialu: " << endl; 
    cin >>b; 
    
    cout << "Liczby podzielne przez 4 z przedziału <" <<a <<","<<" "<<b<<">: ";  
    
    for(int i=a; i<=b; i++)
    {
        if(i%4==0)
        {
            cout << i << " "; 
            ile++; 
        }
    }
    
    cout << endl << "W podanym przedziale jest " << ile << " liczb podzielnych przez 4."; 
    
}
