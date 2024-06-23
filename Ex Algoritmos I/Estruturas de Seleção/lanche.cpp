#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int code; // código do produto
    int quantity; // quantidade
    double total; // valor à pagar

    // Entrada de dados

    cin >> code >> quantity;

    // Estrutura de seleção 

    if (code == 1)
        total = quantity*4;

    else if (code == 2)
        total = quantity*4.5;

    else if (code == 3)
        total = quantity*5;

    else if (code == 4)
        total = quantity*2;
    
    else if (code == 5)
        total = quantity*1.5;
    
    // Saída de dados
    cout << fixed << setprecision(2) << "Total: R$ " << total << endl;

    return 0;
}