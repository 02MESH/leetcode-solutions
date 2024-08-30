#include <iostream>
#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <unordered_set>
#include <vector>

using namespace std;

int longestConsecutive(vector<int> &nums) {
  unordered_set<int> numSet(nums.begin(), nums.end());
  int longest = 0;
  for (auto x : numSet) {
    if (numSet.find(x - 1) == numSet.end()) {
      int length = 1;
      while (numSet.find(x + length) != numSet.end())
        length++;
      longest = max(longest, length);
    }
  }
  return longest;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> vec{100, 4, 200, 1, 3, 2};
  cout << longestConsecutive(vec);
  return 1;
}
