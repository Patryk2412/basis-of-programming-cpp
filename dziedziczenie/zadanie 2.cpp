/* 1. Program będzie miał za zadanie obliczać pola pod wykresami funkcji kwadratowych (całki 
oznaczone z funkcji kwadratowych w danym przedziale). 
Proszę stworzyć klasę Pole,  a w niej: - trzy zmienne typu int, dwie z nich oznaczają dolną i górną granicę przedziału, w którym 
będziemy liczyli pole (całkę), trzecia oznacza liczbę podprzedziałów, na które podzielimy nasz 
przedział; - metodę zwracającą wartość funkcji matematycznej dla  argumentu, który został przekazany 
jako argument metody. Można przyjąć jakąś stosunkowo prostą postać funkcji kwadratowej, celem 
uniknięcia zbędnych komplikacji może to być funkcja, która przyjmuje tylko wartości nieujemne, np. 
x2 + 1; - konstruktor domyślny, ustawiający dolną i górną granicę przedziału odpowiednio na 0 i 1, a 
liczbę podprzedziałów na 100. 
Proszę następnie stworzyć klasę Prostokat, dziedziczącą po klasie Pole. Będzie ona odpowiadała za 
liczenie wspomnianego pola (całki oznaczonej) z wykorzystaniem metody prostokątów. W klasie 
proszę utworzyć: - funkcję (metodę) o nazwie calka (bezargumentową) obliczającą pole metodą prostokątów. 
Funkcja ma zwracać wartość obliczonego pola (całki); 
Klasa ma posiadać przeciążony konstruktor w następujących wariantach: - bezargumentowy (domyślny - ma działać jak ten z klasy Pole); - z dwoma argumentami typu int (dolna i górna granica przedziału); - z trzema argumentami typu int (dolna i górna granica przedziału oraz liczba podprzedziałów, 
na które dzielimy przedział). 
Proszę następnie stworzyć klasę Trapez dziedziczącą po klasie Prostokat. Będzie ona odpowiadała za 
liczenie wspomnianego pola (całki oznaczonej) z wykorzystaniem metody trapezów. W klasie proszę 
utworzyć: - funkcję (metodę) o nazwie calka (bezargumentową) obliczającą pole metodą trapezów. 
Funkcja ma zwracać wartość obliczonego pola (całki). 
Klasa ma posiadać przeciążony konstruktor w następujących wariantach (analogicznie jak dla klasy 
Prostokat): - bezargumentowy (domyślny - ma działać jak ten z klasy Pole); - z dwoma argumentami typu int (dolna i górna granica przedziału); - z trzema argumentami typu int (dolna i górna granica przedziału oraz liczba podprzedziałów, 
na które dzielimy przedział). 
W funkcji main() proszę sprawdzić poprawność zaimplementowanych klas oraz metod. Która z metod 
jest dokładniejsza? */ 

#include <iostream>
using namespace std; 

class Pole
{
    public: 
    int a,b,n; 
    
    double wartosc(double argument); 
    
    Pole(); 
}; 

double Pole::wartosc(double argument)
{
    // Dla funkcji: f(x)=x^2+1
    double wartosc; 
    wartosc=argument*argument+1; 
    return wartosc; 
}

Pole::Pole()
{
    a=0; 
    b=1; 
    n=100; 
}

class Prostokat : public Pole
{
    public: 
    
    double calka(); 
    
    Prostokat(); 
    Prostokat(int x, int y); 
    Prostokat(int x, int y, int z); 
}; 

double Prostokat::calka()
{
    double suma = 0; 
    double dx = (b - a)/(double)n; 
    
    for (int i = 1; i <= n; i++) 
    { 
        suma = suma + wartosc(a + i*dx) * dx; 
    } 
    
    return suma;
}

Prostokat::Prostokat()
{
    a=0; 
    b=1; 
    n=100;
}

Prostokat::Prostokat(int x, int y)
{
    a=x; 
    b=y; 
    n=100; 
}

Prostokat::Prostokat(int x, int y, int z)
{
    a=x; 
    b=y; 
    n=z; 
}

class Trapez : public Prostokat
{
    public: 
    
    double calka(); 
    
    Trapez(); 
    Trapez(int x, int y); 
    Trapez(int x, int y, int z); 
}; 

double Trapez::calka()
{
    double suma = 0; 
    double dx = (b - a)/(double)n; 
    
    for (int i = 1; i < n; i++) 
    { 
        suma = suma + wartosc(a + i*dx); 
    } 
    
    suma = suma + 0.5*(wartosc(a) + wartosc(b)); 
    return suma * dx;  
}

Trapez::Trapez()
{
    a=0; 
    b=1; 
    n=100;
}

Trapez::Trapez(int x, int y)
{
    a=x; 
    b=y; 
    n=100; 
}

Trapez::Trapez(int x, int y, int z)
{
    a=x; 
    b=y; 
    n=z; 
}

int main()
{
    Prostokat pr1 = Prostokat(0,1,100); 
    cout << "Pole metodą protokątów dla przedziału [0;1] i n=100: " << pr1.calka() << endl; 
    
    Trapez tr1 = Trapez(0,1,100); 
    cout << "Pole metodą trapezów dla przedziału [0;1] i n=100: " << tr1.calka() << endl; 
    
    Prostokat pr2 = Prostokat(2,5,100); 
    cout << "Pole metodą protokątów dla przedziału [2;5] i n=500: " << pr2.calka() << endl; 
    
    Trapez tr2 = Trapez(2,5,100); 
    cout << "Pole metodą trapezów dla przedziału [2;5] i n=500: " << tr2.calka() << endl; 
    
    Prostokat pr3 = Prostokat(-2,4,100); 
    cout << "Pole metodą protokątów dla przedziału [-2;4] i n=1000: " << pr3.calka() << endl; 
    
    Trapez tr3 = Trapez(-2,4,100); 
    cout << "Pole metodą trapezów dla przedziału [-2;4] i n=1000: " << tr3.calka() << endl; 
    
    return 0; 
}

