#include <iostream>

using namespace std;

// Armazenamento dos nomes e notas de cada competidor
struct dados
{
    string nome;
    int n1;
    int n2;
    int n3;
    int n4;
};

// Função para verificação do vencedor com base nas notas
int strongest(dados atletas[], int nAtletas)
{
    int i; // contador
    int nTotal; // soma das notas
    int pos=0; // posição do vencedor
    int maior=0; // aux para verificar a maior nota
   
   for(i=0; i<nAtletas; i++)
   {
       nTotal = atletas[i].n1+atletas[i].n2+atletas[i].n3+atletas[i].n4;
       
        if(nTotal > maior)
        {
            maior = nTotal;
            pos = i;
        }
   }
    
    return pos;
}

int main()
{
    dados atletas[10];
    int i; // contador
    int nAtletas; // número de atletas 
    int x; // aux da posição do vencedor 
    
    cin >> nAtletas;
    
    for(i=0; i<nAtletas; i++)
    {
        getline(cin >> ws, atletas[i].nome);
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
        
        x = strongest(atletas, nAtletas);
    }
    
    cout << "Vencedor: " << atletas[x].nome << endl;
    
    return 0;
}