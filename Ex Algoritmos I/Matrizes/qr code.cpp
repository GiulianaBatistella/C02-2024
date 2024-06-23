#include <iostream>

using namespace std;

int main()
{
    int mat[3][3]; // matriz de entrada
    int l, c; // contadores
    
    for(l=0; l<3; l++)
    {
        for(c=0; c<3; c++)
        {
            cin >> mat[l][c];
        }
    }
    
    if(mat[0][1] == 0)
                cout << "FEMININO" << endl;
            else
                cout << "MASCULINO" << endl;
                
    return 0;
}