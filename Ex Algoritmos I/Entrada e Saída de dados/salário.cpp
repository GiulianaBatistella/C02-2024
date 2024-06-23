#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int NUMBER;
    int H;
    double VH;
    double SALARY;
    
    cin >> NUMBER >> H >> VH;
    
    SALARY = H*VH;
    
    cout << fixed << setprecision(2);
    
    cout << "NUMBER = " << NUMBER << endl;
    
    cout << "SALARY = " << SALARY << endl;
    
    return 0;
}