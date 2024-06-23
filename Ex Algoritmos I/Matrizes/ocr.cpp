#include <iostream>

using namespace std;

int main()
{
    int mat[5][3];
    int l, c, i=0;
    
    for(l=0; l<5; l++)
    {
        for(c=0; c<3; c++)
        {
                cin >> mat[l][c];
                if(mat[l][c] == 0)
                    i++;
        }
    }
    
    while(i != 15)
    {
        if(mat[2][1] == 1 && mat[4][1] == 0)
            cout << "ZERO" << endl;
        
        else if(mat[0][0] == 1)
            cout << "UM" << endl;
        
        else if(mat[3][2] == 1)
            cout << "DOIS" << endl;
            
        else if(mat[1][0] == 1 && mat[3][0] == 1 && mat[2][0] == 0 && mat[2][1] == 0)
            cout << "TRES" << endl;
            
        else if(mat[0][1] == 1 && mat[2][1] == 0)
            cout << "QUATRO" << endl;
            
        else if(mat[1][2] == 1 && mat[3][0] == 1)
            cout << "CINCO" << endl;
            
        else if(mat[3][0] == 0 && mat[1][2] == 1)
            cout << "SEIS" << endl;
        
        else if(mat[0][0] == 0 && mat[2][1] == 1)
            cout << "SETE" << endl;
            
        else if(mat[2][1] == 0 && mat[4][0] == 0 && mat[1][0] == 0 && mat[1][2] == 0)
            cout << "OITO" << endl;
            
        else if(mat[0][1] == 0 && mat[1][1] == 1 && mat[4][1] == 1)
            cout << "NOVE" << endl;
            
        i = 0;
        
        for(l=0; l<5; l++)
        {
            for(c=0; c<3; c++)
            {
                    cin >> mat[l][c];
                    if(mat[l][c] == 0)
                        i++;
            }
        }
    }
    
    return 0;
}