#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, count2 = 0;
  vector<int> arr;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    int count = 0;
    cin >> s;
    for (int j = 0; j < s.length(); j++) {
      if (s[j] == 'O') {
        count += 1;
      }
      else if (s[j] == 'X') {
        count = 0;
      }
      count2 += count;
    }
  arr.push_back(count2);
  count2 = 0;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}