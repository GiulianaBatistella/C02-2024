#include <iostream>
#include <cmath>

using namespace std;

// função para o calculo de 'a'
int calc_a(int x)
{
    int a;
    
    a = 2*pow(x,2) + 3*x - 1;
    
    return a;
}

// função para o calculo de 'b'
int calc_b(int x)
{
    int b;
    
    b = pow(x, 3);
    
    return b;
}

// função para o calculo de 'c'
int calc_c(int y)
{
    int c;
    
    c = pow(y, 3);
    
    return c;
}

int main()
{
    int z, k; // numeros para calcular 'a', 'b' e 'c'
    
    cin >> z >> k;
    
    cout << "a = " << calc_a(z) << endl;
    cout << "b = " << calc_b(z) << endl;
    cout << "c = " << calc_c(k) << endl;
    
    return 0;
}