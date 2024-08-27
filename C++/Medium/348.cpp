#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
  vector<int> result(nums.size());
  int prefix = 1;
  for (int i = 0; nums.size() > i; i++) {
    result[i] = prefix;
    prefix *= nums[i];
  }

  int postfix = 1;
  for (int i = result.size() - 1; i >= 0; i--) {
    result[i] *= postfix;
    postfix *= nums[i];
  }

  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{1, 2, 3, 4};
  test = productExceptSelf(test);
  for (int x : test)
    cout << x << ", ";
  return 1;
}
