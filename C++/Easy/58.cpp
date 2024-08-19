#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(string s) {
  int result = 0;
  bool flag = false;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (flag && !isalpha(s[i]))
      break;
    else if (isalpha(s[i])) {
      result++;
      flag = true;
    }
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string test = "Hello World";
  cout << lengthOfLastWord(test) << endl;
  return 1;
}
