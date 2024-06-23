#include <iostream>

using namespace std;

int main()
{
    int N, i, fatorial = 1;

    cout << "Digite um numero: ";

    cin >> N;

    fatorial = N;

    if (N < 0)
        cout << "Calculo Impossivel" << endl;

    else if(N==0)
        cout <<  "Resposta: -1";

    else
    {
        for (i = N - 1; i >= 1; i--)
        {
            fatorial = fatorial * i;
        }

        cout << "Resposta: " << fatorial << endl;

    }

    return 0;
}