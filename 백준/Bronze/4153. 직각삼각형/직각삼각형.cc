#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  vector<int> triangle;
  string judge;
  while (1) {
    triangle.clear();
    int a=0, b=0, c=0;
    cin >> a >> b >> c;
    if (a == b and b == c and c == 0) {
      break;
    }
    else {
      int max1 = 0;
      triangle.push_back(a);
      triangle.push_back(b);
      triangle.push_back(c);
      max1 = *max_element(triangle.begin(), triangle.end());
      if (max1*max1 == (a*a)+(b*b)+(c*c)-(max1*max1)) {
        judge += "right\n";
      }
      else {
        judge += "wrong\n";
      }
    }
  }
  cout << judge;
  return 0;
}