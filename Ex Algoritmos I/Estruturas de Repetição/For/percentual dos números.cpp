#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N; // total de itens
    int i; // contador
    int x; // itens
    double positivos = 0, negativos = 0; // =0 pra não sair valor aleatório

    cout << "Entre com a quantidade de numeros: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> x;

        if (x >= 0)
            positivos += 1;

        else
            negativos += 1;
    }

    cout << "Positivos: " << fixed << setprecision(1) << positivos / N * 100 << "%" << endl;
    cout << "Negativos: " << negativos / N * 100 << "%" << endl;

    return 0;
}