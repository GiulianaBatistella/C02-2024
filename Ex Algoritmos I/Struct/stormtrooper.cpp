#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
    int id;
    double im;
    double fa;
    float ga;
};

int main()
{
    dados stormtrooper[10];
    int i=0;
    int N;
    float maior; 
    int pos;
    int x;
    
    cin >> x;
    
    while(x != 0)
    {
        stormtrooper[i].id = x;
        cin >> stormtrooper[i].im;
        cin >> stormtrooper[i].fa;
        
        stormtrooper[i].ga = (stormtrooper[i].im + stormtrooper[i].fa)/2;
        i++;
        
        cin >> x;
    }
    
    N = i;
    
    maior = stormtrooper[0].ga;
    pos = stormtrooper[0].id;
    
    for(i=1; i < N; i++)
    {
        if(stormtrooper[i].ga > maior)
        {
            maior = stormtrooper[i].ga;
            pos = stormtrooper[i].id;
        }
    }
    
    cout << "Stormtrooper escolhido: " << pos << endl;
    cout << "GA = " << maior << endl;
    
    return 0;
}