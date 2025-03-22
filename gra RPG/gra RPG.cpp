/* Krótka gra RPG: 
Naszym zadaniem będzie napisanie krótkiej gry RPG. Na początku gracz wybiera jedną z trzech 
dostępnych w grze postaci: wojownik, mag, kleryk. Statystyki postaci są następujące: 
Wojownik: 
Atak (zadawane obrażenia): 4 - 6 
Leczenie (punkty zdrowia regenerowane podczas leczenia): 2 
Punkty zdrowia: 30 
Mag: 
Atak (zadawane obrażenia): 3 - 9 
Leczenie (punkty zdrowia regenerowane podczas leczenia): 4 
Punkty zdrowia: 20 
Kleryk: 
Atak (zadawane obrażenia): 2 - 5 
Leczenie (punkty zdrowia regenerowane podczas leczenia): 5 
Punkty zdrowia: 25 
Następnie gracz wybiera poziom trudności (łatwy, normalny lub trudny). Wybrany poziom trudności 
będzie determinował z jakim prawdopodobieństwem zostanie wylosowany trudniejszy lub łatwiejszy 
przeciwnik (spośród trzech dostępnych: goblin, ork, troll) dla gracza. Szanse wylosowania 
konkretnych przeciwników na kolejnych poziomach trudności: 
Łatwy: goblin - 60%, ork - 30%, troll - 10% 
Średni: goblin - 20%, ork - 60%, troll - 20% 
Trudny: goblin - 5%, ork - 30%, troll - 65% 
Statystyki przeciwników 
Goblin: 
Atak (zadawane obrażenia): 2 - 4 
Leczenie (punkty zdrowia regenerowane podczas leczenia): 0 
Punkty zdrowia: 16 
Ork: 
Atak (zadawane obrażenia): 3 - 5 
Leczenie (punkty zdrowia regenerowane podczas leczenia): 0 
Punkty zdrowia: 24 
Troll: 
Atak (zadawane obrażenia): 3 - 7 
Leczenie (punkty zdrowia regenerowane podczas leczenia): 0 
Punkty zdrowia: 30 
Po doborze przeciwnika następuje walka, w której swoje akcje na przemian wykonują gracz i jego 
przeciwnik. Gracz może wykonać atak lub uzdrowić się. Przeciwnik (sterowany przez program) 
zawsze atakuje. 
Celem realizacji gry proszę stworzyć klasę Postac, a w niej: - cztery publiczne zmienne typu int odpowiadające za atak bazowy, atak maksymalny, 
leczenie oraz punkty zdrowia i jedną zmienną typu string odpowiadającą za nazwę postaci; - funkcję atak przyjmującą jako argument obiekt klasy Postac. Funkcja odpowiada za 
wykonanie ataku przez postać, która jest argumentem funkcji na postaci, na której funkcja jest 
wywoływana (to ważne!). W jej wyniku punkty zdrowia atakowanej postaci mają zostać zmniejszone 
o całkowitą losowo wybraną wartość z przedziału <atak bazowy, atak maksymalny> postaci 
atakującej (czyli np. Wojownik może zadać przeciwnikowi 4, 5 lub 6 obrażeń); - funkcję lecz (bezargumentową), której wynikiem jest zwiększenie punktów zdrowia obiektu, 
na którym wywoływana jest ta funkcja o wartość zmiennej przechowującej liczbę leczenie; - funkcję sprawdz_hp (bezargumentową), która sprawdzi ile punktów zdrowia ma obiekt, na 
którym funkcja jest wywoływana. Funkcja ma zwracać wartość true, jeśli liczba punktów zdrowia 
obiektu jest większa niż 0, w przeciwnym wypadku ma zwracać false; - konstruktor, który będzie ustawiał atak bazowy i maksymalny, leczenie, punkty zdrowia oraz 
nazwę postaci, a ponadto konstruktor domyślny, który będzie pusty. 
Proszę ponadto stworzyć funkcję walka, przyjmująca dwa argumenty typu Postac, które stoczą ze sobą 
walkę. Rozpoczyna się ona od tury gracza, może on wykonać atak lub uzdrowić się (np. wciśnięcie 
klawisza ‘a’ spowoduje atak, a klawisza ‘l’ leczenie). W zależności od wyboru dokonanego przez 
gracza wywoływana jest odpowiednia funkcja. Po turze gracza następuje tura przeciwnika, który 
zawsze wykonuje atak.  Po każdej czynności proszę też wyświetlić na ekranie obecne punkty zdrowia 
postaci gracza oraz przeciwnika. Gracz oraz przeciwnik wykonują swoje tury na przemian do 
momentu aż punkty zdrowia jednej z walczących postaci będą mniejsze lub równe 0 (należy 
wykorzystać tu funkcję sprawdz_hp). Wówczas na ekranie powinien wyświetlić się stosowny 
komunikat.  
Uproszczona wersja gry: zainicjuj walkę pomiędzy dwoma obiektami, które sam stworzysz już w ciele 
programu (a zatem gracz nie będzie miał możliwości wyboru postaci, ani poziomu trudności, a co za 
tym idzie nie będzie „losowania” przeciwnika). Możesz również przyjąć, że wybrane przez Ciebie 
postacie zadają zawsze taką samą liczbę obrażeń, zamiast zadawania obrażeń z jakiegoś zakresu (czyli 
np. atak wojownika to zawsze 5, a orka 4). */

#include <iostream>
#include <ctime>

using namespace std;

class Postac 
{
public:
    int atak_baza;
    int atak_max;
    int leczenie;
    int zdrowie;
    string nazwa;

    void atak(Postac &przeciwnik);
    void lecz();
    bool sprawdz_hp();
    Postac(int atak_baza, int atak_max, int leczenie, int zdrowie, string nazwa);
    Postac();
};

void walka(Postac &gracz, Postac &wrog);

int main() 
{
    srand(time(0));

    Postac woj = Postac(4, 6, 2, 30, "Wojownik");
    Postac mag = Postac(3, 9, 4, 20, "Mag");
    Postac kler = Postac(2, 5, 5, 25, "Kleryk");
    Postac gracz;

    int wybor;

    do 
    {
        cout << "Wybierz postać: 1 - Wojownik, 2 - Mag, 3 - Kleryk: ";
        cin >> wybor;
    } while (wybor < 1 || wybor > 3);

    if (wybor == 1) 
    {
        gracz = woj;
    } 
    else if (wybor == 2) 
    {
        gracz = mag;
    } 
    else 
    {
        gracz = kler;
    }

    do 
    {
        cout << "Wybierz poziom trudności: 1 - łatwy, 2 - normalny, 3 - trudny: ";
        cin >> wybor;
    } while (wybor < 1 || wybor > 3);

    Postac goblin = Postac(2, 4, 0, 16, "Goblin");
    Postac ork = Postac(3, 5, 0, 24, "Ork");
    Postac troll = Postac(3, 7, 0, 30, "Troll");
    Postac wrog;

    int losuj = rand() % 100;

    if (wybor == 1) 
    { 
        if (losuj < 60) 
        {
            wrog = goblin;
        }
        else if (losuj < 90) 
        {
            wrog = ork;
        }
        else 
        {
            wrog = troll;
        }
    } 
    else if (wybor == 2) 
    { 
        if (losuj < 20) 
        {
            wrog = goblin;
        }
        else if (losuj < 80) 
        {
            wrog = ork;
        }
        else 
        {
            wrog = troll;
        }
    } 
    else 
    { 
        if (losuj < 5) 
        {
            wrog = goblin;
        }
        else if (losuj < 35) 
        {
            wrog = ork;
        }
        else 
        {
            wrog = troll;
        }
    }

    cout << "Twoim przeciwnikiem jest: " << wrog.nazwa << endl;
    walka(gracz, wrog);
}

Postac::Postac(int a, int b, int c, int d, string str) 
{
    atak_baza = a;
    atak_max = b;
    leczenie = c;
    zdrowie = d;
    nazwa = str;
}

Postac::Postac() 
{
    
}

void Postac::atak(Postac &przeciwnik) 
{
    int obrazenia = atak_baza + rand() % (atak_max - atak_baza + 1);
    przeciwnik.zdrowie -= obrazenia;
    cout << "Zadane obrażenia: " << obrazenia << endl;
}

void Postac::lecz() 
{
    zdrowie += leczenie;
    cout << "Leczenie o " << leczenie << ", nowe HP: " << zdrowie << endl;
}

bool Postac::sprawdz_hp() 
{
    return zdrowie > 0;
}

void walka(Postac &gracz, Postac &wrog) 
{
    while (gracz.sprawdz_hp() && wrog.sprawdz_hp()) 
    {
        char akcja;
        
        cout << "Wybierz akcję: a - atak, l - leczenie: ";
        cin >> akcja;

        if (akcja == 'a') 
        {
            gracz.atak(wrog);
        } 
        else 
        {
            gracz.lecz();
        }

        if (!wrog.sprawdz_hp()) 
        {
            cout << "Wygrałeś!" << endl;
            return;
        }

        wrog.atak(gracz);
        if (!gracz.sprawdz_hp()) 
        {
            cout << "Przegrałeś!" << endl;
            return;
        }
    }
}

