#include <iostream>

using namespace std;

int main()
{
    int i;
    int N;
    int x;
    int tabuada[11];
    
    cin >> N;

    for(i = 0; i <= 10; i++)
    {
        tabuada[i] = N*i;

        cout << N << " x " << i << " = " << tabuada[i] << endl;
    }

    return 0;
}