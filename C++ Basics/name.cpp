#include <iostream>

using namespace std;
int main()
{
  string name;
  cout << "What is your name?";
  getline(cin, name);
  cout << "Welcome " << name << endl;
  return 0;
}