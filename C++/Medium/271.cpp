#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string encode(const vector<string> &strs) {
  string result = "";
  for (int i = 0; strs.size() > i; i++) {
    result += to_string(strs[i].size()) + '#' + strs[i];
  }
  return result;
}

vector<string> decode(string s) {
  int i = 0;
  vector<string> result;
  while (s.size() > i) {
    int j = i;
    while (s[j] != '#' && j < s.size())
      j++;

    int strLength = stoi(s.substr(i, j - i));
    result.push_back(s.substr(j + 1, strLength));
    i = j + 1 + strLength;
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<string> testVector{"I", "love", "neetcode"};
  testVector = decode(encode(testVector));
  for (auto x : testVector)
    cout << x << ", ";
  return 1;
}
