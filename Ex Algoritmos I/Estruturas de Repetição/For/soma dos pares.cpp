#include <iostream>

using namespace std;

int main()
{
    int N, i, soma=0;
    
    cout << "Digite um numero maior que 0: ";

    cin >> N;

    if (N<=0)
        cout << endl << "Erro de entrada!" << endl;

    else
    {
        for (i=2; i<=N; i+=2)
            soma+=i;
    }
    
    cout << soma << endl;

    return 0;
}