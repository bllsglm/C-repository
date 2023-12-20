#include <iostream>

using namespace std;
int main()
{
  int n, result;
  cout << "Enter the number n: ";
  cin >> n;
  result = (n * (n + 1)) / 2;
  cout << "Sum of the integers from 0 to N is: " << result << endl;
  return 0;
}