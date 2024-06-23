#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Função para calcular as raízes
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
    float delta;
    
    delta = pow(b, 2) - 4*a*c;    
    
    if (delta < 0 || a == 0)    
        return 1;
        
    else 
    {                      
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    
        return 0; 
    }
}

int main()
{
    float x, y, z; // numeros de entrada
    float k1, k2; // resultado das raízes
    float r; // auxiliar
    
    cin >> x >> y >> z;
    
    r = calc_raizes(x, y, z, k1, k2);
    
    if(r == 0)
    {
        if (k1 < k2) 
        {       
            cout << fixed << setprecision (5);
            cout << "x1 = " << k1 << endl;
            cout << "x2 = " << k2 << endl; 
        } 
        
        else if (k1 > k2) 
        {     
            cout << fixed << setprecision (5);
            cout << "x1 = " << k2 << endl;
            cout << "x2 = " << k1 << endl; 
        }
       
       else if (k1 == k2) 
       {    
            cout << fixed << setprecision (5);
            cout << "x = " << k2 << endl; 
       }
       
    }

    else if (r == 1) 
        cout << "Impossivel calcular" << endl; 
    
    return 0;
}