#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int trap(vector<int> &height) {
  int left = 0, right = height.size() - 1;
  int maxLeft = height[left], maxRight = height[right];
  int result = 0;
  while (right > left) {
    if (maxRight > maxLeft) {
      left++;
      maxLeft = max(maxLeft, height[left]);
      result += maxLeft - height[left];
    } else {
      right--;
      maxRight = max(maxRight, height[right]);
      result += maxRight - height[right];
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
