#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int N, x;
    double i, maiores=0, menores=0;

    cout << "Quantidade de pessoas: ";

    cin >> N;

    cout << "Idade de cada pessoa: "; // NÃO PODE COUT DENTRO DO FOR

    for(i=0; i<N; i++)
    {
        cin >> x;

        if (x>=21)
            maiores+=1; /* apesar de o if ja fazer uma "analise" se são maiores de idade ou não, 
            a quantidade precisa ficar armazenada em algum lugar, por isso esse +=1, sera 
            armazenada de 1 em 1 */

        else
            menores+=1;
    }

    cout << "Maiores: " << fixed << setprecision(2) << maiores/N*100 << "%" << endl;
    cout << "Menores: " << menores/N*100 << "%" << endl;
    
    return 0;
}