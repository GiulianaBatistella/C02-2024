#include <iostream>

using namespace std;

int main()
{
    int N;
    int i=1;
    int d = 0;
    
    cin >> N;

    while(i <= N)
    {
        if(N % i == 0)
            d ++;
        
        i++;
    }
    
     if(d == 2)
            cout << "primo" << endl;
        
        else
            cout << "nao e primo" << endl;
    
    return 0;
}