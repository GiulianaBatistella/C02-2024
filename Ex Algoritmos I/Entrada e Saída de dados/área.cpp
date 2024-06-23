#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
double A, B, C;

cin >> A >> B >> C;

//área do triângulo retângulo
double atr;

atr = A*C/2;

//área do círculo de raio 
double ac;

ac = 3.14159*pow (C,2);

//área do trapézio
double at;

at = (A + B)*C/2;

//área do quadrado
double aq;

aq = pow (B,2);

//área do retângulo
double ar;

ar = A*B;

cout << fixed << setprecision(3);

cout << "Triangulo = " << atr << endl;
cout << "Circulo = " << ac << endl;
cout << "Trapezio = " << at << endl;
cout << "Quadrado = " << aq << endl;
cout << "Retangulo = " << ar << endl;
    
    return 0;
}