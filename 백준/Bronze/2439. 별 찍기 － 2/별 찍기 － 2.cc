#include <iostream>
using namespace std;

int main() {
  int a;
  string space = " ", star = "*";
  
  cin >> a;
  for (int i=0; i<a; i++) {
    for (int j = 0; j<a-i-1; j++) {
      cout << space;
    }
    for (int j = 0; j<i+1; j++) {
      cout << star;
    }
    cout << endl;
  }
  return 0;
}