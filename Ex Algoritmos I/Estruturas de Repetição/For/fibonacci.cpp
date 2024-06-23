#include <iostream>

using namespace std;

int main()
{
    int i; // contador
    int n; // numero de termos
    int ult = 1, penult = 0; // ultimo e penultimo numero
    int x; // variável de armazenamento

    /* colocamos que ult é igual a 1 e penult igual a 0 pois 
    fibonacci sempre começa com 0 e 1 */

    cin >> n;

    cout << penult << " " << ult << " ";

    for (i = 3; i <= n; i++)
    {
        cout << (ult+penult) << " ";

        x = penult;
        penult = ult;
        ult = ult + x;
    }
    /* por conta de ja termos colocado o 0 e o 1 para sair no cod sempre, nosso contador 
    vai começar a partir no terceiro numero.
    ex: 0 1 1 - o 0 e o primeiro 1 ja estavam definidos para estarem ali, o novo numero é o 1 */
    
    return 0;
}