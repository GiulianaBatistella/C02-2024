#include <iostream>

using namespace std;

int main()
{
    int i = 0; // contador
    int j = 0; // segundo contador
    int array[20]; // armazenamento dos numeros
    int x; // numero a ser pesquisado
  
    cin >> array[i];
    j++;
    
    while(array[i] != 0)
    {
        i++;
        cin >> array[i];
        j++;
    }
    
    cin >> x;
    
    for(i=0; i <= j; i++)
    {
        if(i == j && array[i] != x || x == 0 )
        {
            cout << "Elemento " << x << " nao foi encontrado" << endl;
            break;
        }
            
            
        else if(array[i] == x && x != 0)
        {
            cout << "Elemento " << x << " encontrado na posicao " << i << endl;
            break;
        }
    }
    
    return 0;
}