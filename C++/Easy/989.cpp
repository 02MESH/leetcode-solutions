#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cmath>
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

vector<int> addToArrayForm(vector<int> &num, int k) {
  int carry = 0;
  for(int i = num.size() - 1; i >= 0; i--) {
    int digit = k % 10;
    int value = num[i];
    int sum = digit + value + carry;
    num[i] = sum % 10;
    carry = sum / 10;
    k /= 10;
  }
  while(carry || k) {
    int digit = k % 10;
    int sum = digit + carry;
    carry = sum / 10;
    num.insert(num.begin(), (sum % 10));
    k /= 10;
  }
  return num;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> num{1, 2, 0, 0};
  int k = 34;
  addToArrayForm(num, k);
  for (auto x : num)
    std::cout << x;
  return 1;
}
