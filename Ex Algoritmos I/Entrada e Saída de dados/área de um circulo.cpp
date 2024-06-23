#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A;
    double r;
    
    cin >> r;
    
    A=3.14159*pow(r,2);
    
    cout << fixed << setprecision(3);
    
    cout << "A= " << A;
    
    return 0;
}