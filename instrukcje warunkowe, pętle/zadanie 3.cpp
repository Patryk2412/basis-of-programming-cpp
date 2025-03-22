/* 3. Napisz program, w którym użytkownik podaje jedną liczbę naturalną, a program wyświetla na 
ekranie wszystkie liczby podzielne przez 13 i jednocześnie mniejsze od podanej liczby. Dla każdej 
znalezionej liczby program ma wyświetlić również różnicę pomiędzy liczbą podaną przez 
użytkownika a znalezioną liczbą.
Program ma również wyświetlić na ekranie wszystkie liczby podzielne przez 23 i jednocześnie 
mniejsze od podanej przez użytkownika liczby. W przypadku tych liczb, program nie ma już podawać 
wymienionej wyżej różnicy, ale ma wyświetlać na ekranie informację, że znalazł liczbę podzielną 
przez 23.
Program powinien sprawdzać każdą liczbę naturalną zaczynając od 1. Jeśli podczas sprawdzania 
program natrafi na liczbę podzielną przez 59, to ma na ekranie wyświetlić stosowną informację i 
zakończyć swoje działanie (bez sprawdzania dalej). Proszę wykorzystać tylko jedną pętlę (np. for). */ 

#include <iostream> 
using namespace std;
int main()
{
    int a;
    cout <<"Podaj liczbe a: " << endl;
    cin >>a;
    
    for(int i=1; i<a; i++)
    {
        if(i%13==0)
        {
            cout <<"liczba podzielna przez 13 i mniejsza od "<<a<<": " << i << ", różnica: " <<a-i << endl; 
        }
   
        if(i%23==0)
        {
            cout <<"Liczba podzielna przez 23: " << i << " "<< endl; 
        }
        if(i%59==0)
        {
            cout <<"znalazłem liczbę podzielną przez 59. Koniec działania programu. ";
            break; 
        }
    }
}
