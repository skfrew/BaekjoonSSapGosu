#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string input;
  vector<int> arr;
  cin >> input;
  for (int i = 0; i < 26; i++) {
    int count=0, index=0;
    for (int j = 0; j < input.length(); j++) {
      if (input[j] - '0' == 'a' + i - '0') {
        count += 1;
      }
    }
    if (count == 0) {
      index = -1;
    }
    else {
      index = input.find(char(i + 'a'));
    }
    arr.push_back(index);
  }
  for (int i = 0; i < 26; i++) {
  cout << arr[i] << " ";
  }
  return 0;
}