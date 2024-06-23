#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Função para calculo da média entre dois números
void media(int x, int y, float &m)
{
    m = sqrt(x*y);
}

int main()
{
    int x, y; // numeros para calculo da media
    float m; // media entre x e y;
    
    cin >> x >> y;
    
    media(x, y, m);
    
    cout << fixed << setprecision(2) << "Media: " << m << endl;
    
    return 0;
}