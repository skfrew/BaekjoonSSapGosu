#include <iostream>
using namespace std;
int main() {
int num;
  cin >> num;
  int i, j;
  for (i=1; i <= num; i++) {
    for (j=1; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}