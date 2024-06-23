#include <iostream>
#include <string>

using namespace std;

struct registros
{
    string placa;
    string modelo;
    int localizacao;
} dados[20];

int main()
{
    bool novo=true;
    int i=0, j;
    string resposta, busca;

   while(novo==true)
   {
        cout << endl << "Placa: ";
        getline(cin, dados[i].placa);

        cout << "Modelo: ";
        cin.ignore();
        getline(cin, dados[i].modelo);

        cout << "Codigo de localizacao: ";
        cin.ignore();
        cin >> dados[i].localizacao;

        cout << endl << "Novo cadastro?" << endl;
        getline (cin, resposta);

        if (resposta != "s")
            novo = false;

        i++;
   }

   if (resposta == "n")
   {
    cout << endl << "Qual a placa?" << endl;
    getline(cin,busca);
   }

   for(j=0; j<i; j++)
   {
        if (busca == dados[j].placa)
            cout << endl << "Vaga: " << dados[j].localizacao;
        
        else
            cout << endl << "Placa nao encontrada";
   }

    return 0;
}