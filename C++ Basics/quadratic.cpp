// Finding Roots of quadratic equations

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a, b, c, r1, r2;
  cout << "Enter the determinants:" << endl;
  cin >> a >> b >> c;
  r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  cout << "Roots of the equations are " << r1 << " and " << r2 << endl;

  return 0;
}