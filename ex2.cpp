#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
int main () {
    double a,b;
    cout << "Введите длины катетов через пробел: \n";
    cin >> a >> b;
    cout <<"Гипотенуза равна: " << fixed << setprecision(2) << sqrt(a*a+b*b) << endl;
    return 0;
}