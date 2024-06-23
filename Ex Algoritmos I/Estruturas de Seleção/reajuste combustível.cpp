#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double GASOLINA, ETANOL, VGASOLINA, VETANOL, NOVOG, NOVOE;

    cin >> GASOLINA >> ETANOL >> VGASOLINA >> VETANOL;

    if (VGASOLINA > 2*VETANOL)
    {
        NOVOG = GASOLINA + GASOLINA*0.2;

        NOVOE = ETANOL - ETANOL*0.1;

        cout << fixed << setprecision(2) << "Novo preco da gasolina = " << NOVOG << endl;
        cout << fixed << setprecision(2) << "Novo preco do etanol = " << NOVOE << endl;
    }

    if (VGASOLINA == 2*VETANOL)
    {
        NOVOG = GASOLINA + GASOLINA*0.1;

        NOVOE = ETANOL - ETANOL*0.1;

        cout << fixed << setprecision(2) << "Novo preco da gasolina = " << NOVOG << endl;
        cout << fixed << setprecision(2) << "Novo preco do etanol = " << NOVOE << endl;
    }

    if (VGASOLINA < 2*VETANOL)
    {
        NOVOG = GASOLINA - GASOLINA*0.1;

        NOVOE = ETANOL + ETANOL*0.2;

        cout << fixed << setprecision(2) << "Novo preco da gasolina = " << NOVOG << endl;
        cout << fixed << setprecision(2) << "Novo preco do etanol = " << NOVOE << endl;
    }
    return 0;
}