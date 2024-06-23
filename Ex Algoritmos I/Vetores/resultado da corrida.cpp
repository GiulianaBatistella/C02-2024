#include <iostream>

using namespace std;

int main()
{
    double temp[10]; // tempo dos corredores 
    int pos; // variavel para a posição
    int n; // variavel para a quantidade de entrada de temp
    double menor; // variavel para ver qual o menor
    int i=0, j; // contadores
    
    cin >> temp[i];
    
    // Repetição da entrada de dados e contagem da quantidade
    while(temp[i] != -1)
    {
       i++;
        cin >> temp[i];
    }
    
    n = i;
    
    cout << "Classificacao:" << endl;
    
    // Comparação do menor com o menor para chegar classificação 
    for(i=0; i < n; i++)
    {
        menor = 1000;
        
        for(j=0; j < n; j++)
        {
             if(temp[j] < menor)
            {
                menor = temp[j];
                pos = j;
            }   
        }
        
        cout << pos << endl;
        temp[pos] = 1000;
    }
    
    return 0;
}