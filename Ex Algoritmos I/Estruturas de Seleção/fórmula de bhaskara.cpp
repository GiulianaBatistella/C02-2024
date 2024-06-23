#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double A, B, C, Z, R1, R2;

    cin >> A >> B >> C;

    if (pow(-B, 2) - 4 * A * C > 0 && (2 * A) != 0)
    {
        Z = pow(-B, 2) - 4 * A * C;

        R1 = ((-B) + sqrt(Z)) / (2 * A);

        R2 = ((-B) - sqrt(Z)) / (2 * A);

        cout << fixed << setprecision(5) << "Valor de R1 = " << R1 << endl;
        cout << fixed << setprecision(5) << " Valor de R2 = " << R2 << endl;
    }
    
    else
        cout << "Impossivel calcular" << endl;

    return 0;
}