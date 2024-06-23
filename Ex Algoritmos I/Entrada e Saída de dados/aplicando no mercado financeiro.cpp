#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
double M, C, i;
int t;

cin >> C >> i >> t;

M = C*pow((1 + (i*0.01)),t);

cout << fixed << setprecision (2);

cout << "LUCRO = " << M-C << endl;

    return 0;
}