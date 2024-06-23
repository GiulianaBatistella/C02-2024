#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i; // contador
    float x; // valores de entrada
    float media=0;
    float positivos = 0; // quantidade total de números positivos
    float soma=0;

    for(i = 0; i < 6; i++)
    {
        cin >> x;

        if(x >= 0)
        {
            positivos++;
            soma = soma + x;
        }
    }

    media = soma/positivos;
     
    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}