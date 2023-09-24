#include <iostream>
using namespace std;

int main() {
  int a, i, b, c, e;
  cin >> a; 
  int d[a];
  for (i=0; i<a; i++) {
    cin >> b >> c;
    d[i] = b+c;
  }
  for (e=0; e<a; e++) {
    cout << d[e] << endl;
  }
  return 0;
}