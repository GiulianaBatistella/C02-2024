#include <iostream>
#include <iomanip>

using namespace std;

// soma das notas e calculo da média
float media(int notas[], int nAlunos)
{
    double x; // auxiliar para a soma de notas
    float y; // media
    int i; // contador
    
    x = 0;
    
    for(i=0; i < nAlunos; i++)
        x += notas[i];
        
    y = x/nAlunos;
    
    return y;
}

int main()
{
    int notas[10]; // armazena as notas
    int i; // contador
    int nAlunos = 10; // numero de alunos
    float y; // media da turma
    
    cin >> nAlunos;
    
    for(i=0; i<nAlunos; i++)
        cin >> notas[i];
        
    y = media(notas, nAlunos);
    
    cout << fixed << setprecision(2) << "Media da turma = " << y << endl;
    
    return 0;
}