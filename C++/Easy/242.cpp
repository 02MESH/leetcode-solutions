#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <vector>
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string s, string t) {
  if (s.size() != t.size())
    return false;
  vector<int> chars(26, 0);
  for (int i = 0; s.size() > i; i++)
    chars[s[i] - 'a']++;
  for (int i = 0; t.size() > i; i++) {
    if (chars[t[i] - 'a'] == 0)
      return false;
    chars[t[i] - 'a']--;
  }
  return true;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  cout << boolalpha << isAnagram("baba", "abba");
  return 1;
}
