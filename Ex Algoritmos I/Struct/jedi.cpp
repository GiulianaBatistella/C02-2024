#include <iostream>
#include <string>

using namespace std;

struct cadastro
{
  string nome; // nome do jedi
  int base; // base onde este localizado o jedi
};

int main()
{
    cadastro dados[10];
    int N; // numero de jedis pra cadastro
    int i; // contador
    int aux = -1; // auxiliar para verificação de pesquisa
    string busca; // nome de jedi a ser pesquisado
    
    cin >> N;
    
    for(i=0; i < N; i++)
    {
        getline(cin >> ws, dados[i].nome);
        cin >> dados[i].base;
    }
    
    getline(cin >> ws, busca);
    
    for(i=0; i<N; i++)
    {
        if(busca == dados[i].nome)
        {
            cout << "Este cavaleiro esta na base " << dados[i].base << endl;
            aux = 1;
        }
    }
    
    if(aux == -1)
        cout << "Este cavaleiro nao esta cadastrado" << endl;
        
    return 0;
}