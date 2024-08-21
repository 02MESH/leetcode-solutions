#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>

using namespace std;

int sum(int num1, int num2) { return num1 + num2; }

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  cout << sum(1, 1);
  return 1;
}
