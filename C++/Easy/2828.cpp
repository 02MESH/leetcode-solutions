#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isAcronym(vector<string> &words, string s) {
  if (words.size() != s.size())
    return false;
  for (int i = 0; words.size() > i; i++) {
    if (words[i][0] != s[i])
      return false;
  }
  return true;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<string> words{"never", "gonna", "give", "up", "on", "you"};
  string s = "ngguoy";
  cout << boolalpha << isAcronym(words, s);
  return 1;
}
