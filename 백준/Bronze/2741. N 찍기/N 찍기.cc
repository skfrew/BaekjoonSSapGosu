#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  if (a <= 100000) {
    cout << 1;
    for (int i = 0; i < a-1; i++) {
    cout << "\n" << i+2;
    }
  }
  return 0;
}