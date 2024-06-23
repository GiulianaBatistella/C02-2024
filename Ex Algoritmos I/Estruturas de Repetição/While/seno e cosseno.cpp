#include <iostream>
#include <cmath>

using namespace std;

int main() {
   
    double N1, N2;
    double theta;
    double result;
    double maior ;
    double menor ;
    
    cin >> N1 >> N2;
    
    if(N1 >= N2)
        return 0;
        
    theta = N1;
    
    result = sin(theta)*cos(theta);

    while(result <= 0)
    {
        theta = theta + 0.1;
        result = sin(theta)*cos(theta);
    }
    
    maior = theta;
    
    while(result > 0)
    {
        theta = theta + 0.1;
        result = sin(theta)*cos(theta);   
    }
    
    menor = theta - 0.1;
    
    cout << maior << " a " << menor << endl;

    return 0;
}
