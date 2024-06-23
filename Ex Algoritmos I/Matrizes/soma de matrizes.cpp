#include <iostream>

using namespace std;

int main()
{
    int mat1[10][10];
    int mat2[10][10];
    int mat3[10][10];
    int n, m; // numero de linhas e colunas
    int l, c; // contadores
    
    cin >> n >> m;
    
    for(l = 0; l < n; l++)
    {
        for(c = 0; c < m; c++)
            cin >> mat1[l][c];
    }
    
    for(l = 0; l < n; l++)
    {
        for(c = 0; c < m; c++)
            cin >> mat2[l][c];
    }
    
    for(l = 0; l < n; l++)
    {
        for(c = 0; c < m; c++)
        {
            
            mat3[l][c] = mat1[l][c] + mat2[l][c];
            cout << mat3[l][c] << " ";
        }
        cout << endl;
    }
    
    return 0;
}