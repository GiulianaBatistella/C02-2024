#include <iostream>

using namespace std;

int main()
{
   int i; // contador
   int n; // quantidade de números digitados
   int square = 1; // quadrado dos numeros pares 
   
   cin >> n;

   for (i = 1; i <= n; i++) 
   { 
        if(i % 2 == 0)
        {
            square = i * i; 
            cout << i << "^2 = " << square << endl;
        }
   }

    return 0;
}