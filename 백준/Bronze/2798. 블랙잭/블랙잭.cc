#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, T;
  vector<int> arr, result, minus;
  cin >> N >> T;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr.push_back(input);
  }
  for (int i = 0; i < N; i++) {
    int a = arr[i];
    vector<int> arr2 = arr;
    arr2.erase(arr2.begin() + i);
    for (int j = 0; j < N - 1; j++) {
      int b = arr2[j];
      vector<int> arr3 = arr2;
      arr3.erase(arr3.begin() + j);
      for (int k = 0; k < N - 2; k++) {
        int output = a+b+arr3[k];
        result.push_back(output-T);
        if (output <= T) {
          minus.push_back(output - T);
        }
      }
    }
  }
  int m_max = *max_element(minus.begin(), minus.end());
  cout << m_max+T;
  return 0;
}