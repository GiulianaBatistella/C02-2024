#include <iostream>

using namespace std;

int main()
{
    int IDADE, CONTRIBUICAO;

    cout << "Forneca a idade e o tempo de contribuicao: " << endl;

    cin >> IDADE >> CONTRIBUICAO;

    if ((IDADE >= 65 && CONTRIBUICAO >= 35) || (IDADE >= 60 && CONTRIBUICAO >= 30))
        cout << "Qualificado" << endl;
    else
        cout << "Nao qualificado" << endl;

    return 0;
}