// The program which calculates the net salary from basic salary, allowances and deductions

#include <iostream>

using namespace std;

int main()
{
  float salary, allowance, deduction, netSalary;
  cout << "Enter your salary, allowance, deduction: " << endl;
  cin >> salary >> allowance >> deduction;
  netSalary = salary + (salary * (allowance / 100)) - (salary * (deduction / 100));
  cout << "Your net salary is: " << netSalary << endl;
}