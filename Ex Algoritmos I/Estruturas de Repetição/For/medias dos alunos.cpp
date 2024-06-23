#include <iostream>

using namespace std;

int main ()
{
    int QUANTIDADE, PV1, PV2, MEDIA, i;

    cout << "Quantidade de alunos: ";

    cin >> QUANTIDADE;

    for (i=1; i<=QUANTIDADE; i++)
    {
        cout << endl << "Digite as notas do aluno " << i << " : ";

        cin >> PV1 >> PV2;

        MEDIA = (PV1 + PV2)/2;

        cout << "Media final: " << MEDIA << " - ";

        if (MEDIA >= 50)
        {
            cout << "APROVADO" << endl;
        }
        
        else
        {
            cout << "REPROVADO" << endl;
        }

    }

    return 0;
}