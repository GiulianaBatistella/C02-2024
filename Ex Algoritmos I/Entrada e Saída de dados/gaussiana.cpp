#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x , m , s;
    double f;
    
    // entrada de dados
    cin >> x >> m >> s;
    
   f = (1/sqrt(2*3.14159*pow(s,2)))*exp(-(pow((x-m),2)/2*pow(s,2)));
    
    // saída de dados
    cout << fixed << setprecision(4) << f << endl;
    
    return 0;
}