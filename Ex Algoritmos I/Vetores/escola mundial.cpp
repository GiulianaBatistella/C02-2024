#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double grades[10];
    int N, i, high_grade=0, low_grade=0;
    double media, total_grade=0;
    
    cin >> N;

    for(i=0; i<N; i++)
    {
        cin >> grades[i];

        total_grade=total_grade+grades[i];
    }

    media=total_grade/N;

    for(i=0; i<N; i++)
    {
        if(grades[i]>=media)
            high_grade++;

        else
            low_grade++;
    }

    cout << endl << fixed << setprecision(2) << "Media da turma: " << media;
    cout << endl << "Alunos com nota acima da media: " << high_grade;
    cout << endl << "Alunos com nota abaixo da media: " << low_grade;

    return 0;
}