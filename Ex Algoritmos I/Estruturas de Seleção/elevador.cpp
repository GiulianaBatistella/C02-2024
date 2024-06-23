#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int L, C, R1, R2;
    int A, C1, C2, T;

    cin >> L >> C >> R1 >> R2;

    A = L * C;

    C1 = 2*R1;
    C2 = 2*R2;

    T = C1 + C2;

    if(T > L)
    {
        if(T < C)
            cout << "N" << endl;
        else
            cout << "S" << endl;
    }

    else if(T > C)
    {
        if(T < L)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    else 
        cout << "N" << endl;

    return 0;
}