#include <iostream>
#include <cmath>

using namespace std;

// Função p/ cálculo do Delta
float calc_delta(float a, float b, float c)
{
    int delta;
    
    delta = pow(b, 2)-4*a*c;
    
    return delta;
}

int main()
{
    int x, y, z; // valores qualquer
    
    cin >> x >> y >> z;

    if(x == 0)
        x = 1;
    
    cout << "delta = " << calc_delta(x, y, z) << endl;
    
    return 0;
}