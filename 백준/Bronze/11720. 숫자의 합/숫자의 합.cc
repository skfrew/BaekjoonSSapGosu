#include <iostream>
using namespace std;
int main() {
  int a, c=0;
  string b;
  cin >> a;
  cin >> b;
  for (int i = 0; i < a; i++) {
    c += b[i] - '0';
  }
  cout << c;
  return 0;
}