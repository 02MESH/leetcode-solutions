#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int percentageLetter(string s, char letter) {
  int result = 0;
  for (int i = 0; s.size() > i; i++)
    if (s[i] == letter)
      result++;
  return (result * 100) / s.size();
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string test = "foobar";
  cout << percentageLetter(test, 'o');
  return 1;
}
