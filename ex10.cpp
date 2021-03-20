#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int rad;
    double pi;
    pi = 3.14;
    cout << "Введите радиус шара: \n";
    cin >> rad;
    cout << "Объём шара равен: \n" <<(4.0/3.0)*pi*pow(rad,3)<<endl<< "Поверхность шара равна: \n"<<4*pi*pow(rad,2)<<endl;
    return  0;
}