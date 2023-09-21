#include <iostream>
using namespace std;

int main() {
  string a;
  int sum = 0;
  getline(cin, a);
  if (a.length() <= 1000002 and a.length() > 1) {
    int i;
    for (i = 1; i < a.length()-1; i++) {
      if (int((a[i]) == 32 ))
        sum += 1;
      else 
        sum += 0;
    }
    cout << sum+1;
  }
  else if (a.length() == 1) {
    if (int(a[0]) == 32)
      cout << 0;
    else
      cout << 1;
  }
  return 0;
}