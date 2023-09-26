#include <iostream>
using namespace std;

int main() {
  int a, i;
  cin >> a;
  if (1 <= a and a <= 9)
    for (i=1; i<=9; i++)
      cout << a << " * " << i << " = " << a*i << endl;
  return 0;
}