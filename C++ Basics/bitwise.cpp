#include <iostream>

using namespace std;

int main()
{
  int x = 11;
  int y = 5;
  int z = x & y;  // and operator
  int m = x | y;  // or opeartor
  int c = y << 1; // shifting bits
  int t = x ^ y;  // x^or if bits are same then zero
  cout << t << endl;
}