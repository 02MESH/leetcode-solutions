#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
  unordered_set<char> charSet;
  int left = 0, right = 0, max = 0;
  while (s.size() > right) {
    if (!charSet.contains(s[right])) {
      charSet.insert(s[right++]);
      max = std::max(max, right - left);
    } else {
      charSet.erase(s[left++]);
    }
  }
  return max;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string test("bbbbb");
  std::cout << lengthOfLongestSubstring(test);
  return 1;
}
