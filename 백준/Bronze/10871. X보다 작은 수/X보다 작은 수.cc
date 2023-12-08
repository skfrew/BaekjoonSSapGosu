#include <iostream>
using namespace std;

int main() {
  int a,b;
  cin >> a;
  int one = a;
  cin >> a;
  int two = a;
  cin.ignore();
  cin >> b;
  for (int i = 0; i < one; i++) {
    if (b < two) {
      cout << b << " ";
    }
    cin >> b;
  }
  return 0;
}