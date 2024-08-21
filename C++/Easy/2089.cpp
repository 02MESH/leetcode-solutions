#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>

using namespace std;

vector<int> targetIndices(vector<int> &nums, int target) {
  vector<int> result;
  sort(nums.begin(), nums.end());
  for (int i = 0; nums.size() > i; i++)
    if (nums[i] == target)
      result.push_back(i);
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{1, 2, 5, 2, 3};
  test = targetIndices(test, 5);
  for (auto x : test)
    std::cout << x;
  return 1;
}

// Another solution that doesn't require sorting
// vector<int> targetIndices(vector<int> &nums, int target) {
//   int count = 0, less = 0;
//   vector<int> ans;
//   for (int i = 0; i < nums.size(); i++) {
//     if (nums[i] < target)
//       less++;
//     else if (nums[i] == target)
//       count++;
//   }
//   if (count == 0)
//     return ans;
//   else {
//     int i = less;
//     while (count != 0) {
//       ans.push_back(i);
//       count--;
//       i++;
//     }
//   }
//   return ans;
// }
