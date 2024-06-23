#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int PRECOATUAL;
    float VENDIDOS, NOVOPRECO;

    cin >> VENDIDOS >> PRECOATUAL;

    if (VENDIDOS == 0)
    {
        NOVOPRECO = PRECOATUAL - (PRECOATUAL * 0.1);

        cout << "R$ " << fixed << setprecision(2) << PRECOATUAL << " - o produto sofreu uma reducao de preco, passando a valer = " << NOVOPRECO << fixed << setprecision(2) << endl;
    }

    if (VENDIDOS > 0 && VENDIDOS < 500)
    {
        cout << "R$ "<< fixed << setprecision(2) << PRECOATUAL << "-  sem reajuste" << endl;
    }

    if (VENDIDOS >= 500 && VENDIDOS < 1000)
    {
        NOVOPRECO = PRECOATUAL + (PRECOATUAL * 0.1);

        cout << "R$ " << fixed << setprecision(2) << PRECOATUAL << " - o produo sofreu um aumento de preco, passando a valer = " << NOVOPRECO << fixed << setprecision(2) << endl;
    }

    if (VENDIDOS >= 1000)
    {
        NOVOPRECO = PRECOATUAL + (PRECOATUAL * 0.15);

        cout << "R$ " << fixed << setprecision(2) << PRECOATUAL << " - o produto sofreu um aumento de preco, passando a valer = " << NOVOPRECO << fixed << setprecision(2) << endl;
    }

    if (VENDIDOS < 0 || PRECOATUAL < 0)
        cout << "Erro de entrada..." << fixed << setprecision(2) << endl;

    return 0;
}