#include <iostream>

using namespace std;

int main()
{
    int z; // seleção da operação
    double v, x, y; // resultado e números de entrada

    // Entrada dos valores
    cin >> x >> y;

    cout << "Escolha a operacao:\n ";
    cout << "[1] = soma, [2] = subtracao, [3] = multiplicacao, [4] = divisao\n" << endl;
    cin >> z;

    switch (z) //o que vc quer q varie, que dependendo do caso o resultado mude
    {
        case 1: //se o z for 1, vai relizar tal operação
        v = x+y;
        cout << "Resultado = " << v << endl;
        break;

        case 2: //se o z for 2, vai realizar outra operação e assim por diante
        v = x-y;
        cout << "Resultado = " <<  v << endl;
        break;

        case 3:
        v = x*y;
        cout << "Resultado = " <<  v << endl;
        break;

        case 4:
        v = x/y;
        cout << "Resultado = " <<  v << endl;
        break;

        default:
        cout << "Erro" << endl;
    }
    return 0;
}