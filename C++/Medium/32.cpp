#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int trap(vector<int> &height) {
  if (height.empty())
    return 0;
  int l = 0, r = height.size() - 1;
  int leftMax = height[l], rightMax = height[r];
  int result = 0;
  while (r > l) {
    if (leftMax < rightMax) {
      l++;
      leftMax = max(leftMax, height[l]);
      result += leftMax - height[l];
    } else {
      r--;
      rightMax = max(rightMax, height[r]);
      result += rightMax - height[r];
    }
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  cout << trap(test);
  return 1;
}
