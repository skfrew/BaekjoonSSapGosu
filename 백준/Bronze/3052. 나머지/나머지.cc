#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  int input;
  vector<int> arr;
  set<int> myset;
  for (int i = 0; i < 10; i++) {
    int input2 = 0;
    cin >> input;
    input2 = input % 42;
    arr.push_back(input2);
  }
  for (int j = 0; j < 10; j++) {
    myset.insert(arr[j]);
  }
  cout << myset.size();
  return 0;
}