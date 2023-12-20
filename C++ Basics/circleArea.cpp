// The program which calculates the area of a circle

#include <iostream>
#include <math.h>

using namespace std;
void circleArea();

int main()
{
  circleArea();
}

void circleArea()
{
  float radius;
  cout << "Enter radius :" << endl;
  cin >> radius;
  cout << "Circle area is " << 3.14 * pow(radius, 2) << endl;
}