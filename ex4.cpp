#include <iostream>
using namespace std;
int main() {
    int x1,x2,y1,y2;
    cout << "Введите координаты первой точки через пробел: \n";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки через пробел: \n";
    cin >> x2 >> y2;
    cout << "Уравнение прямой в общем виде: \n" << (y1-y2) <<"x+"<<(x2-x1)<<"y+"<<(x1*y2-x2*y1)<<endl;
    return 0;
}
