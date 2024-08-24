#include <iostream>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073

using namespace std;

int numberOfMatches(int n) {
  int result = 0;
  while (n > 1) {
    result += (n / 2);
    n = (n / 2) + (n % 2);
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  cout << numberOfMatches(14);
  return 1;
}
