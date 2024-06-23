#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
   double A; 
   double B;
   double TROCO;
   
   cin >> A >> B;
   
   TROCO = A - B;
   
   cout << fixed << setprecision(2);
   
   cout << "TROCO = " << TROCO << endl;
   
    return 0;
}