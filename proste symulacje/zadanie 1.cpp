// Symulacja Monte Carlo – obliczanie prawdopodobieństwa wyrzucenia "2" na sześciennej kostce do gry
#include <iostream>
using namespace std; 

int main()
{
    srand(time(0)); 
    
    int licz=0;     
    
   for(int i=0; i<10000; i++)
   {
      if(1+rand()%6==2)
      {
         licz++; 
      }
   }
    cout << "Prawdopodobieństwo wyrzucenia 2 oczek sześcienną kostką: " << (double)licz/10000 << endl; 

}
