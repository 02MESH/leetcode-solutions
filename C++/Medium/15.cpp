#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  vector<vector<int>> result;

  for (int i = 0; nums.size() > i; i++) {
    if (nums[i] > 0)
      break;
    if (i > 0 && nums[i - 1] == nums[i])
      continue;
    int left = i + 1, right = nums.size() - 1;
    while (right > left) {
      int sum = nums[i] + nums[left] + nums[right];
      if (sum > 0)
        right--;
      else if (sum < 0)
        left++;
      else {
        result.push_back({nums[i], nums[left++], nums[right--]});
        while (right > left && nums[left] == nums[left - 1])
          left++;
      }
    }
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{-1, 0, 1, 2, -1, -4};
  auto result = threeSum(test);
  for (auto x : result) {
    for (auto y : x) {
      cout << y << ", ";
    }
    cout << "\n";
  }
  return 1;
}
