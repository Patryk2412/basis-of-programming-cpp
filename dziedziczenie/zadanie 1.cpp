//Zadanie. Klasy, dziedziczenie, figury. 
#include <iostream>
#include <cmath>

using namespace std; 

class Czworokat
{
    public: 
    
    double a,b,c,d; 
    
    double obwod(); 
    
    Czworokat(double w, double x, double y, double z); 
    Czworokat(); 
}; 

Czworokat::Czworokat(double w, double x, double y, double z)
{
    a=w; 
    b=x; 
    c=y; 
    d=z; 
}

Czworokat::Czworokat()
{
    a=1; 
    b=1; 
    c=1; 
    d=1; 
}

double Czworokat::obwod()
{
    double obw; 
    obw=a+b+c+d; 
    return obw; 
}

class Rownoleglobok : public Czworokat
{
    public: 
    
    Rownoleglobok(double w, double x, double alfa); 
    Rownoleglobok(); 
    
    double pole(); 
    
    double kat; 
}; 

Rownoleglobok::Rownoleglobok(double w, double x, double alfa)
{
    a=w; 
    b=x; 
    c=w; 
    d=x; 
    kat=alfa; 
}

Rownoleglobok::Rownoleglobok()
{
    a=3; 
    b=5; 
    c=3; 
    d=5; 
    kat=55; 
}

double Rownoleglobok::pole()
{
    double pole; 
    pole=a*b*sin(2*M_PI*kat/360); 
    return pole; 
}

class Prostokat : public Rownoleglobok
{
    public: 
    Prostokat(); 
    Prostokat(double w, double z); 
    
    double pole(); 
}; 

Prostokat::Prostokat()
{
    a=c=3; 
    b=d=5; 
}

Prostokat::Prostokat(double w, double z)
{
    a=w; 
    b=z; 
    c=w; 
    d=z; 
}

double Prostokat::pole()
{
    double pole; 
    pole=a*b; 
    return pole; 
}

int main()
{
    Czworokat czw=Czworokat(5,3,2,1); 
    cout << "Obwod czworokatą: " << czw.obwod() << endl; 
   
    Rownoleglobok row=Rownoleglobok(2, 6, 30); 
    cout << "Pole równoległoboku: " << row.pole() << endl; 
    
    cout << "Obwód równoległoboku: " << row.obwod(); 
    
    Prostokat pr=Prostokat(10, 5); 
    cout << "Pole prostokąta: " << pr.pole() << endl; 
    cout << "Obwód prostokąta: " << pr.obwod() << endl; 
}
