/* Utwórz 10-elementową tablicę i wypełnij ją wybranymi liczbami całkowitymi (dobrze, aby nie były to kolejne liczby).
Następnie program ma wykonać następujące czynności: 
- wypisać elementy tablicy o indeksach parzystych (0 jest liczbą parzystą, należy pamiętać, że 
  pierwszy element tablicy opatrzony jest indeksem 0), 
- wypisać wszystkie elementy tablicy w odwrotnej kolejności (zaczynając od ostatniego i kończąc na pierwszym), 
- obliczyć sumę wszystkich elementów tablicy i wyświetlić wynik na ekranie, 
- znaleźć minimalną i maksymalną wartość elementu tablicy i wyświetlić obie te wartości na ekranie, 
- obliczyć średnią arytmetyczną wszystkich elementów tablicy i wyświetlić wynik na ekranie, 
- sprawdzić ile elementów tablicy ma wartość większą niż średnia arytmetyczna i podać wynik na ekranie. 
Proszę ponadto utworzyć funkcję o nazwie szukaj, która będzie przyjmowała trzy argumenty - 
pierwszym będzie stworzona tablica (adres jej pierwszego elementu), drugim rozmiar tej tablicy, a 
trzecim wartość elementu, którego chcemy poszukać w tej tablicy. Funkcja ma za zadanie przeszukać 
tablicę w poszukiwaniu elementu o wartości równej tej przekazanej jako trzeci argument funkcji. Jeśli 
element zostanie znaleziony, to funkcja powinna wyświetlić na ekranie stosowną informację oraz 
podać liczbę wystąpień tego elementu. Jeśli element o podanej wartości nie zostanie znaleziony, to 
program powinien wyświetlić odpowiedni komunikat. Proszę przetestować działanie utworzonej funkcji. */ 

#include <iostream> 
using namespace std; 

void szukaj(int tab[], int rozmiar, int liczba)
{
    int n=0; 
    
    for(int i=0; i<rozmiar; i++)
    {
        if(tab[i]==liczba)
        {
            n++; 
        }
    }    
        if(n>0)
        {
            cout << "Znaleziono w tablicy element równy podanej liczbie. Występuje on " << n << " razy. " << endl;
        }
        else 
        {
            cout << "Nie znaleziono w tablicy elementu równemu podanej liczbie. " << endl; 
        }
}

int main()
{
    int tab[10]={1,4,6,8,2,7,98,1,3,77}; 
    
    //Tablica pierwotnie: 
    cout <<"Tablica pierwotnie: "; 
    for(int i=0; i<10; i++)
    {
        cout << tab[i] << " "; 
    }
     
    cout << endl; 
    
    //Wypisujemy elementy tablicy o indeksach parzystych: 
    cout << "Parzyste indeksy tablicy: "; 
    for(int i=0; i<10; i=i+2)
    {
        cout << tab[i] << " "; 
    }
    
    cout << endl; 
    
    //Wypisjemy elementy tablicy w odwrotnej kolejności: 
    cout << "Tablica w odwrotnej kolejności: "; 
    for(int i=9; i>=0; i--)
    {
        cout << tab[i] << " "; 
    }
    
    cout << endl; 
    
    //Wypisjemy sumę elementów tablicy: 
    int suma=0; 
    
    cout << "Suma elementów tablicy: "; 
    for(int i=0; i<=9; i++)
    {
        suma=suma+tab[i]; 
    }
    
    cout << suma << endl; 
    
    //Wypisjemy minimalny i maksymalny element tablicy: 
    int min=tab[0]; 
    int max=tab[0]; 
    
    for(int i=1; i<10; i++)
    {
        if(tab[i]<min)
        {
            min=tab[i]; 
        }
        
        if(tab[i]>max)
        {
            max=tab[i]; 
        }
    }
    cout << "Najmniejszy element tablicy: " << min << endl; 
    cout << "Największy element tablicy: " << max << endl; 
    
    //Wypisujemy średnią arytmetyczną elementów tablicy: 
    cout << "Średnia arytmetyczna elementów tablicy: " << (double)suma/10 << endl; 
    
    //Wypisujemy liczbę elementów większych niż średnia: 
    double srednia=(double)suma/10;
    int ile=0; 
    
    for(int i=0; i<10; i++)
    {
        if(tab[i]>srednia)
        {
            ile++; 
        }
    }
    cout << "Liczba elementów tablicy większych niż średnia: " << ile << endl; 
    
    szukaj(tab, 10, 40); 
}
