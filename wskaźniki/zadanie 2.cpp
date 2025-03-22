/* 
Zadanie 2 – Dynamiczna alokacja pamięci dla jednej zmiennej
------------------------------------------------------------
1) Tworzymy wskaźnik do `int`.
2) Dynamicznie przydzielamy pamięć dla jednej zmiennej (`new`).
3) Przypisujemy wartość i wyświetlamy ją.
4) Zwolniamy pamięć (`delete`).
5) Sprawdzamy, co się stanie po zwolnieniu pamięci.

Cel: Pokazanie, jak dynamicznie przydzielać i zwalniać pamięć w C++.
*/

#include <iostream>
using namespace std; 

int main()
{
    int *ptr = new int;  // Tworzymy dynamiczną zmienną
    *ptr = 70;  // Przypisujemy wartość
    cout << "Wartość: " << *ptr << endl;  // Wyświetlamy wartość

    delete ptr;  // Zwolnienie pamięci (dla jednej zmiennej używamy `delete`, a nie `delete[]`)
    ptr = nullptr;  // Zerujemy wskaźnik, żeby uniknąć błędów (dangling pointer)

    // Próba wyświetlenia wartości po usunięciu (może dać losowy wynik lub błąd)
    cout << "Po zwolnieniu pamięci: " << *ptr << endl;  

    return 0;
}
