#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits) {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  int i = digits.size() - 1;
  int carry = 1;
  // Decrement i.e. going backwards
  while (i >= 0 && carry > 0) {
    // Using sum to check if there is a carry bit to be carried backwards.
    int sum = digits[i] + carry;
    carry = sum / 10;
    digits[i] = sum % 10;
    i--;
  }

  if (carry > 0)
    digits.insert(digits.begin(), carry);

  return digits;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{4, 9, 9, 9};
  auto one = plusOne(test);
  for (auto x : one)
    std::cout << x << ", ";
  return 1;
}
