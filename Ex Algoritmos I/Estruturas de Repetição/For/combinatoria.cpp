#include <iostream>

using namespace std;

int main()
{
    int N; // n total de elementos
    int P; // elementos
    int i; // contador
    int x = 1, y = 1;

    cout << "Entre com o numero total de elementos: ";
    cin >> N;

    cout << "Entre com os elementos: ";
    cin >> P;

    if (N==P)
        cout << "Resultado: " << N;
        
    if (N < 0 || P < 0 || P > N)
        cout << "Erro de entrada" << endl;

    else
    {
        x = N;
        y = N - P;

        for (i = N - 1; i >= 1; i--)
        {
            x = x * i;
        }
        for (i = y - 1; i >= 1; i--)
        {
            y = y * i;
        }

        cout << "Resultado: " << x / y << endl;
    }

    return 0;
}