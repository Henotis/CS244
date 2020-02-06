#include <iostream>
using namespace std;

void myswap(int &a, int &b)
{
  int temp;
    cout << "This is value of x before swap: " << a << ". " << "This is value of y: " << b << "\n";
  temp = a;
  a = b;
  b = temp;
    cout << "This is value of x after swap: " << a << ". " << "This is value of y: " << b;
}
int main()
{
  int x = 5;
  int y = 10;
  myswap(x ,y);
  return 0;
}
