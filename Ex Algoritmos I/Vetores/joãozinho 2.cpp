#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x[10], y[10]; // vetores para armazenamento dos numeros de entrada
    double z[10]; // vetor para armazenamento dos resultados das operações
    char op[10]; // vetor para armazenamento do sinais para as operações
    int N; // numero de casos 
    int i; // contador
    
    cin >> N;
    
    for(i=0; i < N; i++)
        cin >> x[i];
    
    for(i=0; i<N; i++)
        cin >> y[i];
        
    for(i=0; i<N; i++)
        cin >> op[i];
        
    for(i=0; i<N; i++)
    {
        switch(op[i])
        {
            case '*':
                z[i] = x[i] * y[i];
                cout << x[i] << " * " << y[i] << " = " << (int)z[i] << endl;
            break;
            
            case '-':
                z[i] = x[i] - y[i];
                cout << x[i] << " - " << y[i] << " = " << z[i] << endl;
            break;
                
            case '+':
                z[i] = x[i] + y[i];
                cout << x[i] << " + " << y[i] << " = " << z[i] << endl;
            break;
            
            case '/':
                z[i] = (float)x[i] / y[i];
                cout << fixed << setprecision(2);
                cout << x[i] << " / " << y[i] << " = " << z[i] << endl;  
            break;
        }
    }
        
    return 0;
}
