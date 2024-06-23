#include <iostream>
#include <iomanip>

using namespace std;

float peso(float h, char s)
{
    float p1;
    
    if(s == 'M')
        p1 = 72.7*h-58;
        
    else if(s == 'F')
        p1 = 62.1*h-44.7;
    
    return p1;
}

int main()
{
    float peso_ideal;
    float h;
    char s;
    
    cin >> h >> s;
    
    cout << fixed << setprecision(2) << "Peso ideal = " << peso(h, s) << " kg" << endl;
    
    return 0;
}