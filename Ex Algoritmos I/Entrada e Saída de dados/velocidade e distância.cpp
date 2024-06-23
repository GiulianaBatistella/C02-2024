#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double V, S, V1, S1, A, T;
    
    cin >> V1 >> S1 >> A >> T;

    V = V1 + A*T;

    S = S1 + V1*T + 0.5*A*pow(T,2);

    cout << "Resultado da velocidade final: " << V << endl;

    cout << "Resultado da posicao final: " << S << endl;

    return 0;
}