// Importance of pre-Increment and after-Increment ++x and x++

#include <iostream>
using namespace std;
int main()
{
  int x, y;
  x = 5;
  y = ++x;
  cout << "Y is " << y << endl;
  return 0;
}