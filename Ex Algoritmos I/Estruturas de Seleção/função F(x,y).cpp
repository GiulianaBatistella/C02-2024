#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, f;

    cin >> x >> y;

    if (x>y)
    {
        f = pow(x,2) + pow(y,2) + 2*x*y;

        cout << "f(x,y) = " << f << endl;
    }

    if (x==y)
    {
        f = 2*x*y + x + y;

        cout << "f(x,y) = " << f << endl;
    }
    	
    if (x<y)
    {
        f = pow(y,2) + pow(x,2) + 2*x*y;

        cout << "f(x,y) = " << f << endl;
    }    
    
    return 0;
}