#include <iostream>

using namespace std;

int main()
{
    int inter; // numeros de gols do inter
    int gremio; // numeros de gols do gremio
    int x; // seleção de opção
    int i; // contador
    int empates=0;
    int winner1=0, winner2=0;
    
    while(x != 2)
    {
        cin >> inter >> gremio;
        
        if(inter > gremio)
            winner1 ++;
        
        else if (gremio > inter)
            winner2 ++;
            
        else if (inter == gremio)
            empates ++;
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        
        cin >> x;
        
        while (x < 1 || x > 2)
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> x;
        }
            
        i++;
    }
    
    cout << i << " grenais" << endl;
    cout << "Inter:" << winner1 << endl;
    cout << "Gremio:" << winner2 << endl;
    cout << "Empates:" << empates << endl;
    
    if(winner1 > winner2)
        cout << "Inter venceu mais" << endl;
        
    else if(winner2 > winner1)
        cout << "Gremio venceu mais" << endl;
    
    else 
        cout << "Nao houve vencedor" << endl;
        
    return 0;
}