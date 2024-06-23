#include <iostream>

using namespace std;

int main()
{
    int i; // contador
    int n; // quantidade de valores lidos
    int x; // representação de cada valor

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;

        if(x < 0 && x%2 == -1) 
            cout << "ODD NEGATIVE" << endl;

        else if(x < 0 && x%2 == 0)
            cout << "EVEN NEGATIVE" << endl;

        else if(x > 0 && x%2 == 1)
            cout << "ODD POSITIVE" << endl;
        
        else if(x > 0 && x%2 == 0)
            cout << "EVEN POSITIVE" << endl;

        else
            cout << "NULL" << endl;
    }

    return 0;
}