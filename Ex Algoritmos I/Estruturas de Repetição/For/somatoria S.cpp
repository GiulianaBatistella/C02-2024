#include <iostream>

using namespace std;

int main()
{
    float x, S = 0;
    int N, i, j, y;
    float fatorial = 1;
    float soma = 0;

    cout << "Entre com um valor para x: ";
    cin >> x;

    cout << "Entre com o numero de termos: ";
    cin >> N;

    if (1 > N > 10)
        cout << "Error" << endl;

    else
    {
        for (j = 1; j <= N; j++)
        {
            fatorial = fatorial * j;
            soma = soma + x / fatorial;
        }

        cout << "S= " << soma << endl;
    }

    return 0;
}
