#include <iostream>

using namespace std;

int main ()
{
    double V; // tensão 
    double R1, R2, R3, Re; // resistores (1, 2, 3) e resistência total
    double It; // corrente total

    // Entrada dos valores da tensão e dos resistores
    cin >> V >> R1 >> R2 >> R3;

    // Cálculo da corrente total (It)
    It = V* (1/R1 + 1/R2 + 1/R3);

    // Cálculo da resistência total (Re)
    Re = 1/(1/R1 + 1/R2 + 1/R3);

    // Saída de dados
    cout << "Valor da corrente total : " << It << endl;
    cout << "Valor da resistencia total: " << Re << endl;

    return 0;
}