#include <iostream>
#include <iomanip>

using namespace std;

// calculo da media 
float media_calc(int notas[], int nAlunos)
{
    float x = 0; // soma das notas
    int i; // contador
    float y; // media
    
    for(i = 0; i < nAlunos; i++) {
        x += notas[i];
    }
    
    y = x/nAlunos;
    
    return y;
}

// calculo da quantidade de alunos abaixo da media 
int nAbaixo(int notas[], int nAlunos, float media)
{
    int z = 0; // soma dos alunos abaixo da media
    int i; // contador 
    
    for(i = 0; i<nAlunos; i++)
    {
        if(notas[i] < media)
            z++;
    }
    
    return z;
}

// calculo da quantidade de alunos acima da media 
int nAcima(int notas[], int nAlunos, float media)
{
    int k = 0; // soma dos alunos acima da media 
    int i; // contador

    for(i=0; i<nAlunos; i++)
    {
        if(notas[i] >= media)
            k++;
    }
        
    return k;
}

int main()
{
    int i; // contador
    int z; // total de alunos abaixo da media 
    int k; // total de alunos acima da media 
    float a; // média total
    int nAlunos = 10; // número de alunos
    int notas[10]; // armazena a nota dos alunos
    
    cin >> nAlunos;
    
    for(i=0; i<nAlunos; i++)
        cin >> notas[i];
    
    a = media_calc(notas, nAlunos);
    
    z = nAbaixo(notas, nAlunos, a);
    
    k = nAcima(notas, nAlunos, a);
    
    cout << fixed << setprecision(2) << "Media da turma = " << a << endl;
    cout << "Alunos com nota abaixo da media: " << z << endl;
    cout << "Alunos com nota acima da media: " << k << endl;
    
    
    return 0;
}