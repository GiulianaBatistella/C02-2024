#include <iostream>
using namespace std;
int main()
{
    int TYPE, DAYS, VALUE;

    cout << "Tipo de automovel: ";
    cin >> TYPE;

    cout << "Dias de locacao: ";
    cin >> DAYS;

    if (TYPE == 1)
        VALUE = 50 * DAYS;

    else if (TYPE == 2)
        VALUE = 100 * DAYS;

    else if (TYPE == 3)
        VALUE = 150 * DAYS;

    if (DAYS < 7)
        cout << endl << "Valor: R$ " << VALUE;

    else if (DAYS >= 7 && DAYS < 15)
    {
        VALUE = VALUE - VALUE * 0.05;

        cout << endl << "Valor: R$ " << VALUE;
    }

    else if (DAYS >= 15)
    {
        VALUE = VALUE - VALUE * .1;

        cout << endl << "Valor: R$ " << VALUE;
    }

    return 0;
}