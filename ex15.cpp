#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a, h;

    cout << "Введите сторону правильной пирамиды и её высоту: \n";
    cin >> a >> h;
    float b = sqrt(h*h+a*a);
    cout << "Площадь поверхности шестиугольной пирамиды: \n" <<(sqrt(3)/4)*a*a+1.5*a*sqrt(b*b-(a*a)/4) <<endl;
    cout << "Объём пирамиды: \n" <<(h*a*a)/6.93<<endl;
    return  0;
}
