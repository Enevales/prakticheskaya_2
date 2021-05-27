#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float rad, l;
    cout << "Введите радиус и высоту кругового конуса: \n";
    cin >> rad >> l;
    cout << "Площадь осевого сечения: \n" <<(rad*l)/2<<endl;
    return  0;
}
