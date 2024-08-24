#include <iostream>
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int> &nums) {
  int n = nums.size();
  int i, j, count = 0;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (nums[i] == nums[j] && i != j)
        count += 1;
    }
  }
  return count;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{1, 2, 3, 1, 1, 3};
  cout << numIdenticalPairs(test);
  return 1;
}
