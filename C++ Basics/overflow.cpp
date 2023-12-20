// This code show an overflow example using char which has a just 1 byte

#include <iostream>

using namespace std;

int main()
{
  char x;
  int y;
  x = 127;
  y = ++x;
  cout << y << endl;
}