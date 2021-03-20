#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int rad, h;
    double pi;
    pi = 3.14;
    cout << "Введите радиус и длину цилиндра: \n";
    cin >> rad >> h;
    cout << "Площади поверности цилиндра: \n" <<2*pi*rad*(rad+h)<<endl<< "Объём цилиндра: \n"<<pi*rad*rad*h <<endl;
    return  0;
}