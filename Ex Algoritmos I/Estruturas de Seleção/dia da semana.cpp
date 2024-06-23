#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int day, month, year, ds, n;
    double g, f, delta;

    // Entrada de dados
    cin >> day >> month >> year;
    
    // Estrutura de seleção 
    if(month <= 2)
        g = year - 1;
    
    else
        g = year;
    
    if(month <= 2)
        f = month + 13;
    
    else
        f = month + 1;
    
    n = int(365.25*g) + int(30.6*f) - 621049 + day;
 
    if(n < 36523)
        delta = 2;

    else    
        delta = 0;


    ds = round((n/7.0 - n/7)*7) + delta + 1;
 
    if(ds == 1)
        cout << "domingo" << endl;
    
    else if(ds == 2)
        cout << "segunda-feira" << endl;

    else if(ds == 3)
        cout << "terca-feira" << endl;

    else if (ds == 4)
        cout << "quarta-feira" << endl;

    else if (ds == 5)
        cout << "quinta-feira" << endl;

    else if (ds == 6)
        cout << "sexta-feira" << endl;

    else if(ds == 7)
        cout << "sabado" << endl;

    return 0;
}