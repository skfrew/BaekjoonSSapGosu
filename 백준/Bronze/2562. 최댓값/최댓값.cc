#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a;
  const int arrSize = 9;
  int arr[arrSize] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int arr2[arrSize] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i=0; i < 9; i++) {
    cin >> a;
    arr[i] = a;
    arr2[i] = a;
 }
 sort(arr, arr + arrSize);
 auto it = find(begin(arr2), end(arr2), arr[8]);
 int index = distance(begin(arr2), it);
 cout << arr[8] << endl;
 cout << index+1;
 return 0;
}