#include <iostream>
#include <vector>
using namespace std;

int main() {
  int input, count=0;
  vector<int> arr;
  for (int i = 0; i < 8; i++) {
    cin >> input;
    arr.push_back(input);
  }
  for (int j = 0; j < 7; j++) {
    if (arr[j] > arr[j+1]) {
      count += 1;
    }
    else if (arr[j] < arr[j+1]) {
      count -= 1;
    }
  }
  if (count == 7) {
    cout << "descending";
  }
  else if (count == -7) {
    cout << "ascending";
  }
  else {
    cout << "mixed";
  }
  return 0;
}