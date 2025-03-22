/* 2. Napisz program, w którym użytkownik podaje dwie liczby naturalne (a i b) , a program wyświetla 
na ekranie wszystkie liczby podzielne przez 4 z przedziału <a, b> oraz podaje ile ich jest */ 

#include <iostream> 
using namespace std;
int main()
{
    int a, b, ile=0;
    
    cout <<"Podaj liczbe a: " << endl;
    cin >>a;
    
    cout <<"Podaj liczbe b: " << endl;
    cin >>b; 
    
    cout << "Liczby podzielne przez 4 w przedziale <" <<a <<";"<<b<<">: " << endl;
    
    for(int i=a; i<=b; i++)
    {
        if(i%4==0)
        {
            cout << i << " ";
            ile++;
        }
    }
    
    cout << endl;
    cout <<"W przedziale <" <<a <<";" <<b <<"> jest " <<ile <<" liczb podzielnych przez 4.";
}


