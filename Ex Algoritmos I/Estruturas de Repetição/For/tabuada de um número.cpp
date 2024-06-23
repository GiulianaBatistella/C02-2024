#include <iostream>

using namespace std;

int main()
{
    int x, i;

    cout << "Digite um numero entre 1 e 10: ";

    cin >> x;

    if (1>x || x>10)
        cout << endl << "Erro" << endl;

    else
        for (i=1; i<=10; i++)
            cout << x*i << endl;

    return 0;
}