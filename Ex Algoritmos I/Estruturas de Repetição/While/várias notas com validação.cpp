#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double P1, P2; // nota 1 e nota 2
    int x; // seleção de opção
    double media;
    
    while(x != 2)
    {
        
        cin >> P1 >> P2;
    
        while (P1 < 0 || P1 > 10 || P2 < 0 || P2 > 10)
        {
            cout << "nota invalida" << endl;
        
            if (P1 < 0 || P1 > 10)
                cin >> P1;
        
            else if (P2 < 0 || P2 > 10)
                cin >> P2;
        }
        
        media = (P1 + P2)/2;
        
        cout << fixed << setprecision(2) << "media = " << media << endl;
        
        cout << "novo calculo (1-sim 2-nao)" << endl;
        
        cin >> x;
        
        while(x < 1 || x > 2)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            
            cin >> x;
        }
    }    
    
    return 0;
}