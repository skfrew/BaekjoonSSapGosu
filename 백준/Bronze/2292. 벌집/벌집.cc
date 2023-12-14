#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  vector<int> arr;
  cin >> N;
  if (N == 1) {
    cout << 1;
  }
  else {
    arr.push_back(1);
    for (int i = 1; i <= N; i++) {
      if (arr[i-1] + 6*i > N - 1) {
        break;
      }
      else {
        arr.push_back(arr[i-1] + 6*i);
      }
    }
    cout << arr.size()+1;
  }
}