#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct cadastro
{
  string nome; // nome da cada padawan
  int pontos; // pontos de cada padawan
};

int main()
{
    cadastro dados[10];
    int n; // numero total de padawans pra armazenar informação
    int i; // contador
    int soma = 0; // aux para soma dos pontos de todos os padawans
    int maior; // conferir quem teve o maior ponto
    int pos; // aux pra posição
    float media; // media dos pontos de todos os padawans
    
    cin >> n;
    
    for(i=0; i<n; i++)
    {
        getline(cin >> ws, dados[i].nome);
        cin >> dados[i].pontos;
        
        soma = soma + dados[i].pontos;
    }
    
    media = (float)soma/n;
    
    maior = dados[0].pontos;
    pos = 0;
    
    for(i=1; i < n; i++)
    {
        if(dados[i].pontos > maior)
        {
            maior = dados[i].pontos;
            pos = i;
        }
    }
    
    cout << "Padawan com mais pontos: " << dados[pos].nome << endl;
    cout << "Pontos: " << dados[pos].pontos << endl;
    cout << fixed << setprecision(2) << "Media da turma: " << media << " pontos" << endl;
    
    return 0;
}