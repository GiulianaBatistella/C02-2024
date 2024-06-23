#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double x, t;

    cin >> t;

    if (-1 <= t && t <= 1)
    {
        x = 1 - fabs(t);

        cout << "Valor de x(t) = " << x << endl;
    }
    
    else
        cout << "x(t) = 0" << endl;

    return 0;
}