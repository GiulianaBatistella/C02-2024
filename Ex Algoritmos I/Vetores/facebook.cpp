#include <iostream>

using namespace std;

int main()
{
    int N, i;
    int maior, menor;
    int users[10];

    cin >> N;
    
    for(i=0; i<N; i++)
    {
        cin >> users[i];

        if(i==0)
        {
            menor=users[0];
            maior=users[0];
        }

        if(users[i]<menor)
            menor=users[i];
    
        else if(users[i]>maior)
            maior=users[i];   
    }
    
    cout << endl << "Menor numero de contatos: " << menor;
    cout << endl << "Maior numero de contatos: " << maior;

    return 0;
}