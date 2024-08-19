#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums) {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  int result = 1;
  for (int i = 1; nums.size() > i; i++) {
    if (nums[i] != nums[i - 1]) {
      nums[result++] = nums[i];
    }
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{1, 1, 2};
  std::cout << removeDuplicates(test) << std::endl;
  for (auto x : test)
    std::cout << x << ", ";
  return 1;
}
