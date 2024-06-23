#include <iostream>

using namespace std;

int main()
{
    int mat[10][10]; // matriz e seu valor max
    int n, m; // valores para a quant de linhas e colunas
    int l, c; // contadores
    
    cin >> n >> m;
    
    for(l=0; l < n; l++)
    {
        for(c=0; c < m; c++)
            cin >> mat[l][c];
        
    }
    
    for(l=0; l < n; l++)
    {
        for(c=0; c < m; c++)
            cout << mat[l][c] << " ";
        cout << endl;
    }
    
    return 0;
}