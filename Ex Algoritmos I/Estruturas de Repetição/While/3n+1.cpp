#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int i, j;
    int maior = 0;
    int comp; // comprimento
    int inicio, final;
    
    cin >> i >> j;
    
    if(i < j)
    {
        inicio = i;
        final = j;
    }
    
    else 
    {
        final = i;
        inicio = j;
    } 
    
    for(x=inicio; x <= final; x++)
    {
        comp = 1;
        y = x;
        
        while(y != 1)
        {
            if (y % 2 == 0)
                y = y/2;
        
            else if (y % 2 == 1)
                y = 3*y + 1;
            
            comp ++;
        }
        
        if (comp > maior)
            maior = comp;
    }
    
    cout << i << " " << j << " " << maior << endl;
    
    return 0;
}