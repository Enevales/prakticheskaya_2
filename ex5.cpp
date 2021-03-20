
#include <iostream>
#include <math.h>
using namespace std;
main() {
        int n,y;
        double p,m,s;
        cout << "Сумма кредита (руб.): \n";
        cin >> n;
        cout << "Период (количество лет): \n";
        cin >> y;
        cout << "Процент: \n";
        cin >> p;
        
        p = p / 100;
        m = (n * p * pow((1+p),y)) / (12 * (pow(1+p,y) - 1));
        s = m * 12 * y;
        cout << "Ежемесячные выплаты:" << m << "руб.\n" << "Всего будет выплачено:"<< s<<endl;
        return 0;
    
}