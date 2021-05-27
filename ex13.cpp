#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float rad, l;
    float pi = 3.14;
    cout << "Введите радиус и высоту кругового конуса: \n";
    cin >> rad >> l;
    cout << "Площадь поверхности конуса: \n" <<pi*rad*l+pi*rad*rad <<endl;
    cout << "Объём конуса: \n" <<0.33*pi*rad*l*rad<<endl;
    return  0;
}
