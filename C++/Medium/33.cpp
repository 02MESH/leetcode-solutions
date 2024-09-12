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

int search(vector<int> &nums, int target) {
  int index = -1;
  int l = 0, r = nums.size() - 1;
  while (r >= l) {
    int m = l + (r - l) / 2;
    if (nums[m] == target) {
      index = m;
      break;
    }
    if (nums[m] >= nums[l]) {
      if (nums[m] >= target && target >= nums[l])
        r = m - 1;
      else
        l = m + 1;
    } else {
      if (target >= nums[m] && nums[r] >= target)
        l = m + 1;
      else
        r = m - 1;
    }
  }
  return index;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test {4,5,6,7,1,2,3};
  cout << search(test, 4);
  return 1;
}
