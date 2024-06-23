#include <iostream>
#include <string>

using namespace std;

struct cadastros
{
    string nome;
    string raca;
    string porte;
} dados[20];

int main()
{
    int N, i;

    cin >> N;
    while(N>100)
        cin >> N;

    cin.ignore();

    for(i=0; i<N; i++)
    {
        cout << endl << "Nome: ";
        getline(cin, dados[i].nome);

        cout << "Raca: ";
        getline(cin, dados[i].raca);

        cout << "Porte: ";
        getline(cin, dados[i].porte);

        while(dados[i].porte != "P" || dados[i].porte != "M" || dados[i].porte != "G")
        {
            if (dados[i].porte != "P" || dados[i].porte != "M" || dados[i].porte != "G")
            {
                cout << "Entrada invalida, tente novamente: ";
                cin.ignore();
                getline(cin, dados[i].porte);
            }
        }
    }

    for(i=0; i<N; i++)
        cout << endl << dados[i].nome;
    
    return 0;
}