/* 
Zadanie1 : Modyfikacja wartości zmiennej przez wskaźnik
-------------------------------------------------------
1) Zadeklaruj zmienną `a` i przypisz jej wartość 10.
2) Stwórz wskaźnik `ptr`, który będzie przechowywał adres `a`.
3) Wyświetl początkową wartość `a` za pomocą wskaźnika.
4) Zmień wartość `a` poprzez wskaźnik na 20.
5) Ponownie wyświetl wartość `a`, aby sprawdzić, czy została zmieniona.
6) Zauważ, że zmiana wartości przez wskaźnik faktycznie modyfikuje oryginalną zmienną.

Cel: Pokazanie, że wskaźniki mogą bezpośrednio modyfikować wartości zmiennych, do których wskazują.
*/

#include <iostream>
using namespace std; 

int main()
{
    int a = 10;  // Deklaracja zmiennej

    int *ptr = &a;  // Tworzymy wskaźnik, który przechowuje adres zmiennej 'a'

    cout << "Przed zmianą: " << *ptr << endl;  // Wyświetlamy początkową wartość zmiennej a
    
    *ptr = 20;  // Modyfikacja wartości zmiennej 'a' przez wskaźnik

    cout << "Po zmianie: " << *ptr << endl;  // Wartość zmieniona przez wskaźnik
    cout << "Wartość a: " << a << endl;  // Powinna wynosić 20, bo wskaźnik zmienił oryginalną zmienną

    return 0;
}
