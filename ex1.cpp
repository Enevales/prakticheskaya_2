#include <iostream>
using namespace std;
int main()
{
  int n,m;
  cout <<"Введите два числа через пробел:"<<endl;
  cin >> n >> m;
  if (!(n % m))
  {
    cout << n;
  }
  if (n%m)
  {
    int x = n/m;
     n = x*m > x*(m+1) ? x*m : x*(m+1); //тернарный оператор
     cout << n;
  }
  return 0;
}
