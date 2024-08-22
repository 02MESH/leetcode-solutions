#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool areOccurrencesEqual(string s) {
  vector<int> vec(26, 0);
  for (char x : s)
    vec[x - 'a']++;

  int temp = 0;
  bool flag = false;

  for (int x : vec) {
    if (x != 0) {
      if (!flag) {
        temp = x;
        flag = true;
      } else if (x != temp)
        return false;
    }
  }
  return true;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  cout << boolalpha << areOccurrencesEqual("abacbc");
  return 1;
}
