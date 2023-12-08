#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int S;
  vector<string> baeyul;
  string words, result;
  
  cin >> S;
  cin.ignore();
  
  for (int i = 0; i < S; i++) {
    getline(cin, words);
    int num = words[0] - '0';
    words.erase(0,2);
    for (int j = 0; j < words.length(); j++) {
      for (int k = 0; k < num; k++) {
        result += words[j];
      }
    }
    result += "\n";
  }
  cout << result;
  return 0;
}