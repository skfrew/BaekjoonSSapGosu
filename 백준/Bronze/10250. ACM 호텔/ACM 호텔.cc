#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  vector<int> arr;
  cin >> t;
  int T = t;
  cin.ignore();
  for (int i = 0; i < T; i++) {
    int H, W, N, num=0, numm=1;
    cin >> H >> W >> N;
    for (int j = 0; j < N; j++) {
      num += 1;
      if (num > H) {
        num += -H;
        numm += 1;
      }
    }
    num *= 100;
    num += numm;
    arr.push_back(num);
  }
  for (int i = 0; i < T; i++) {
  cout << arr[i] << "\n";
  }
  return 0;
}