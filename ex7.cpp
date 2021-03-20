#include <iostream>
using namespace std;
int main() {
    int num, a, b, c, d;
    cin >> num;
    cout << "Дано целое число abcd: " << num << endl;
    cout << "Сумма ab+cd: ";
    a = num%10;
    num /= 10;
    b = num%10;
    num /= 10;
    c = num%10;
    num /= 10;
    d = num%10;
    num /= 10;
    cout << a*b+c*d << endl;
    return 0;
}
