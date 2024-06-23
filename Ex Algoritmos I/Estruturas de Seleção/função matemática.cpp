#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y, f;

    cin >> x >> y;

    if (pow(y, 3) - sqrt(x) > 0 && sqrt(x) >= 0)
    {
        f = (pow(x, 3) - sqrt(y)) / (pow(y, 3) - sqrt(x));

        cout << fixed << setprecision(4) << "f(x,y) = " << f << endl;
    }
    else
        cout << "Erro" << endl;

    return 0;
}