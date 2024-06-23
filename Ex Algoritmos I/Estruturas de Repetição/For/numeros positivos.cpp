#include <iostream>

using namespace std;

int main()
{
    int i; // contador
    int x; // valores de entrada
    int positivos = 0; // quantidade total de números positivos

    for(i = 0; i < 6; i++)
    {
        cin >> x;

        if(x >= 0)
            positivos++;
    }

    cout << positivos << " valores positivos" << endl;

    return 0;
}