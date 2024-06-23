#include <iostream>

using namespace std;

int sinal(int x)
{
    if(x > 0)
        return 1;
        
    if(x < 0)
        return -1;
        
    else
        return 0;
   
}

int main()
{
    int n;
    int aux;
    
    cin >> n;
    
    aux = sinal(n);
    
    if(aux > 0)
        cout << "Positivo" << endl;
    
    else if (aux < 0)
        cout << "Negativo" << endl;
        
    else if (aux == 0)
        cout << "Zero" << endl;
        
    
    return 0;
}