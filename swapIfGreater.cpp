#include <iostream>
using namespace std;

void swapIfGreater(int &a, int &b)
{
  if (a > b)
  {
    int temp = a;
    a = b;
    b = temp;
  }
}

int main()
{
  int x = 5;
  int y = 10;
    cout << "This is value of x before swap: " << x << ". " << "This is value of y: " << y << "\n";
  swapIfGreater(x ,y);
    cout << "This is value of x after swap: " << x << ". " << "This is value of y: " << y;
  return 0;
}
