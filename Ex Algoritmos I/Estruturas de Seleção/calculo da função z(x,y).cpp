#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int Z;
    int X, Y;

    cin >> X >> Y;

    if ((X - Y) >= 0)
    {
        Z = sqrt(X - Y) / sqrt(X + Y);

        cout << "z = " << Z << endl;
    }

    else
        cout << "Calculo impossivel" << endl;

    return 0;
}
