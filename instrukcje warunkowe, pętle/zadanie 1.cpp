/* 1. Napisz program, w którym użytkownik podaje kolejne liczby całkowite. Program kończy 
pobieranie danych od użytkownika jeśli wpisze on wartość 0 (nie jest ona wliczana do danych). W 
następnej kolejności program powinien wyświetlić na ekranie sumę wszystkich wprowadzonych liczb 
oraz ich średnią arytmetyczną. Jeśli już jako pierwszą liczbę wprowadzono 0, to program powinien 
wyświetlić na ekranie stosowny komunikat. */ 

#include <iostream> 
using namespace std;
int main()
{
    int a, suma=0, ile=0; 
    do
    {
        cout << "Podaj liczbe: "<< endl;
        cin>>a;
         if(a!=0)
        {
            suma=suma+a;
            ile++;
        }
        }while(a!=0); 
     if(ile==0)
    {
        cout <<"Pierwsza wprowadzona cyfra to 0. ";
    }
    else
    {
        cout <<"Suma wprowadzonych liczb wynosi: " << suma << endl;
        cout << "Srednia arytmetyczna wprowadzonych liczb wynosi: " << (double)suma/ile; 
    }
    }
