#include <iostream>
#include <iomanip>

using namespace std;

struct alunos
{
    int matricula;
    double A;
    double B;
    double media;
    
};

int main()
{
    alunos grade;
    cin >> grade.matricula;
    cin >> grade.A >> grade.B;
    
    
    grade.media = (grade.A*2 + grade.B*3)/5;
    
    cout << "Matricula do aluno: " << grade.matricula << endl;
    cout << fixed << setprecision(2) << "Nota da primeira prova: " << grade.A << endl;
    cout << "Nota da segunda prova: " << grade.B << endl;
    cout << "Media: " << grade.media << endl;
    
    return 0;
}