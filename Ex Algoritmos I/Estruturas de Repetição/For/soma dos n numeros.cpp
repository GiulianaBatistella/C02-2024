#include <iostream>

using namespace std;

int main()
{ 

    int N, i, soma=0;

    cout << "Digite um numero inteiro maior que 0: ";

    cin >> N;
    
    for (i=0; i<N; i++)
        soma = soma + i;

    cout << soma+N << endl;
    
    return 0;
}