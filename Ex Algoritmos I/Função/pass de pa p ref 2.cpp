#include <iostream>
#include <iomanip>

using namespace std;

// conersão de F pra C e K
void converte(float F, float &C, float &K)
{
    C = (5*(F-32))/9;
    K = C + 273;
}

int main()
{
    float F, C, K;
    
    cin >> F;
    
    converte(F, C, K);
    
    cout << fixed << setprecision(2);
    cout << "Celsius: " << C << endl;
    cout << "Kelvin: " << K << endl;
    
    return 0;
}