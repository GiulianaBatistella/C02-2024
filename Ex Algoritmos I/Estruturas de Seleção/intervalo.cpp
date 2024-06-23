#include <iostream>

using namespace std;

int main()
{
    float X; // valor qualquer

    // Entrada de dados

    cin >> X;

    // Estrutura de seleção e saída de dados

    if(0 < X && X <= 25)
        cout << "[0,25]" << endl;

    else if (25.0 < X && X <= 50.0)
        cout << "[25,50]" << endl;

    else if (50.0 < X && X <= 75.0)
        cout << "[50,75]" << endl;

    else if (75.0 < X && X <= 100.0)
        cout << "[75,100]" << endl;

    else 
        cout << "Fora do intervalo" << endl;

    return 0;
}