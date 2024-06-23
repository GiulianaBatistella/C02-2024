#include <iostream>
#include <iomanip>

using namespace std;

struct alunos
{
    int matricula;
    double A;
    double B;
};

int main()
{
    alunos grade;
    
    cin >> grade.matricula;
    cin >> grade.A;
    cin >> grade.B;

    cout << "Matricula do aluno: " << grade.matricula << endl;
    cout << fixed << setprecision(2) << "Nota da primeira prova: " << grade.A << endl;
    cout << "Nota da segunda prova: " << grade.B << endl;
     
    return 0;
}