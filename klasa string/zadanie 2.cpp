/* Napisz program, w którym użytkownik podaje dowolne słowo, natomiast program ma za zadanie 
je odwrócić i wyświetlić wynik takiej operacji na ekranie. */ 

#include <iostream>
using namespace std; 
int main()
{
   string slowo; 
   int dlugosc; 
   
   cout << "Podaj slowo: " << endl;
   cin >> slowo; 
   
   dlugosc=slowo.length(); 
   
   cout << "Słowo po odwróceniu: "; 
   
   for(int i=dlugosc-1; i>=0; i--)
   {
        cout << slowo[i]; 
   }
}
