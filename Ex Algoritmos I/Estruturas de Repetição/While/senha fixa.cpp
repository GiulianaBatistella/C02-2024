#include <iostream>
#include <string>

using namespace std;

int main()
{
    int senha;
    
    cin >> senha;
    
    while(senha != 2002)
    {
        cout << "Senha Invalida" << endl;
        cin >> senha;
    }
    
    cout << "Acesso Permitido" << endl;
    
    /* caso fosse com string, tem que declarar a biblioteca string,
    e colocar getline(cin >> ws, senha) */
    
    return 0;
}