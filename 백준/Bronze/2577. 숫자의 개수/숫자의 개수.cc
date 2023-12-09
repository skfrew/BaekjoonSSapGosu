#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int a, b ,c;
  vector<int> arr;
  cin >> a >> b >> c;
  int num = a*b*c;
  string input = to_string(num);
  for (int i = 0; i < 10; i++) {
    int count = 0;
    for (int j = 0; j < input.length(); j++) {
      if (input[j] - '0' == i) {
        count += 1;
      }
    }
    arr.push_back(count);
  }
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << "\n";
  }
  return 0;
}