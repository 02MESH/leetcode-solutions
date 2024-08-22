#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <string>

using namespace std;

string mergeAlternately(string word1, string word2) {
  if (word1.size() == 0 || word2.size() == 0)
    return word1 + word2;
  string result = "";
  int i = 0, j = 0;
  while (word1.size() > i || word2.size() > j) {
    if (word1.size() > i) {
      result += word1[i];
      i++;
    }
    if (word2.size() > j) {
      result += word2[j];
      j++;
    }
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string test1 = "abcd", test2 = "pq";
  cout << mergeAlternately(test1, test2);
  return 1;
}
