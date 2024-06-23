#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    double i, H=0; // H = 0 para nao cair um valor aleatorio
    
    cout << "Digite um valor entre 1 e 20: ";

    cin >> N;

    for (i=1; i<=N; i++) // i = 1 pq nao vamos considerar o 0
        H += 1/i; // o i como denomidador pq é ele q vai mudar 
    
    cout << fixed << setprecision(4) << H << endl;

    return 0;
}