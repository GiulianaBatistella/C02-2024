#include <iostream>

using namespace std;

int main()
{
    int i; // contador
    int T; // quantidade de anos a dar entrada
    int year; // os anos 

    cin >> T;

    for (i = 0; i < T; i++)
    {
        cin >> year;

        if(year % 4 == 0 && year % 10 != 0)
            cout << "Yes" << endl;

        else if (year % 100 == 0 && year % 400 != 0)
            cout << "Yes" << endl;
        
        else 
            cout << "No" << endl;
    }

    return 0;
}