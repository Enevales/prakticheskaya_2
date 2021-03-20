#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int rad, len, pi;
    pi = 3.14;
    cout << "Введите радиус и длину бака в сантиметрах: \n";
    cin >> rad, len;
    cout << "Закрашиваемая поверхность в см.: " <<  pi*pow(rad,2) + 2*pi*rad*len <<endl;
}