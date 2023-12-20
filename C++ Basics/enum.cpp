#include <iostream>

using namespace std;

enum day
{
  monday = 100,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday,
  sunday
};

enum dept
{
  cs,
  it,
  ec,
  mech
};

int main()
{
  day d;
  d = friday;
  dept degree = ec;
  cout << d << endl;
  cout << degree << endl;
  return 0;
}