#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

string addBinary(string a, string b) {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  int aSize = a.size() - 1, bSize = b.size() - 1;
  string result;
  int carry = 0;
  while (aSize >= 0 || bSize >= 0 || carry > 0) {
    int sum = carry;
    if (aSize >= 0)
      sum += a[aSize--] - '0';
    if (bSize >= 0)
      sum += b[bSize--] - '0';
    carry = sum / 2;
    result = to_string(sum % 2) + result;
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string test1 = "1010"; 
  string test2 = "1011";
  std::cout << addBinary(test1, test2) << std::endl;
  return 1;
}
