#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cmath>
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <map>
#include <numeric>
#include <random>
#include <set>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

string addStrings(string num1, string num2) {
  string result;
  int n = num1.size() - 1, m = num2.size() - 1;
  int carry = 0;
  while (carry > 0 || n >= 0 || m >= 0) {
    int sum = 0;
    if (n >= 0)
      sum += num1[n--] - '0';
    if (m >= 0)
      sum += num2[m--] - '0';
    sum += carry;
    carry = sum / 10;
    result = to_string(sum % 10) + result;
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string num1 = "456", num2 = "77";
  std::cout << addStrings(num1, num2);
  return 1;
}
