#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double PV1;
    double PV2;
    double EP;
    double MF;
    
    cin >> PV1 >> PV2 >> EP;
    
    MF = (PV1 + PV2)/2*0.9 + EP*0.1;
    
    cout << fixed << setprecision(1);
    
    cout << "MF = " << MF << endl;
    
    return 0;
}
