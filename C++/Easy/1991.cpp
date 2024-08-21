#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int findMiddleIndex(vector<int> &nums) {
  int left = 0, right = 0;
  for (int x : nums)
    right += x;
  for (int i = 0; nums.size() > i; i++) {
    // Makes the current index the middle index if you subtract the element at current index
    right -= nums[i];
    if (left == right)
      return i;
    left += nums[i];
  }
  return -1;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{2, 3, -1, 8, 4};
  cout << findMiddleIndex(test);
  return 1;
}
