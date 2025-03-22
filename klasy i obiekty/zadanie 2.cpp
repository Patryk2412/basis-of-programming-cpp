/* Zadanie. Przeciążenia konstruktorów. Punkty (współrzędne, odległości, ćwiartki). */ 

#include <iostream>
#include <cmath>
using namespace std; 

class Punkt
{
    public: 
    int x, y;
    char nazwa; 
    
    void wypisz(); 
    void odleglosc(Punkt b);
    void cwiartka(); 
    
    Punkt(char c, int a, int b); 
    Punkt(char c, int a); 
    Punkt(char c); 
    Punkt(); 
}; 

Punkt::Punkt(char c, int a, int b)
{
    nazwa=c; 
    x=a; 
    y=b; 
}

Punkt::Punkt(char c, int a)
{
    nazwa=c; 
    x=a; 
    y=0; 
}

Punkt::Punkt(char c)
{
    nazwa=c; 
    x=0; 
    y=0; 
}

Punkt::Punkt()
{
     nazwa='?'; 
     x=0; 
     y=0; 
}

void Punkt::wypisz()
{
    cout << "Współrzędne punktu " << nazwa << " to: (" << x <<";" << y <<")" << endl; 
}

void Punkt::odleglosc(Punkt b)
{
    double odl; 
    odl = sqrt((x-b.x)*(x-b.x)+(y-b.y)*(y-b.y)); 
    cout << "Odległość punktu " << nazwa << " od " << b.nazwa << " wynosi: " << odl << endl; 
}

void Punkt::cwiartka()
{
    if(x>0 && y>0)
    {
        cout << "Punkt " << nazwa << " leży w 1 ćwiartce. " << endl; 
    }
    else if(x<0 && y>0)
    {
        cout << "Punkt " << nazwa << " leży w 2 ćwiartce. " << endl; 
    } 
    else if(x<0 && y<0)
    {
        cout << "Punkt " << nazwa << " leży w 3 ćwiartce. " << endl; 
    }
    else if(x>0 && y<0)
    {
        cout << "Punkt " << nazwa << " leży w 4 ćwiartce. " << endl; 
    }
    else if(x==0 && y!=0)
    {
        cout << "Punkt " << nazwa << " leży na osi OX. " << endl; 
    }
    else if(x!=0 && y==0)
    {
        cout << "Punkt " << nazwa << " leży na osi OY. " << endl; 
    }
    else if(x==0 && y==0)
    {
        cout << "Punkt " << nazwa << " leży w początku układu współrzędnych. " << endl; 
    }
}

int main()
{
   Punkt p1=Punkt('A', 2, 4); 
   p1.wypisz(); 
   
   Punkt p2=Punkt('B', -4); 
   p2.wypisz(); 
   
   Punkt p3=Punkt('C'); 
   p3.wypisz(); 
   
   Punkt p4=Punkt('D', 6, -9); 
   p4.wypisz(); 
   
   p1.odleglosc(p4); 
   
   p1.cwiartka(); 
}

