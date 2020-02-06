#include <iostream>
using namespace std;

int main()
{
  int temp;
  int x = 5;
  int y = 10;
  cout << "This is value of x before swap: " << x << ". " << "This is value of y: " << y << "\n";
  temp = x;
  x = y;
  y = temp;
  cout << "This is value of x after swap: " << x << ". " << "This is value of y: " << y;
  return 0;
}