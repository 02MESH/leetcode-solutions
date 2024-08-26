#include <iostream>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int> &nums, int n) {
  std::vector<int> result;
  for (int i = 0; n > i; i++) {
    result.push_back(nums[i]);
    result.push_back(nums[n + i]);
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{2, 5, 1, 3, 4, 7};
  auto result = shuffle(test, 3);
  for (auto x : result)
    cout << x << ", ";
  return 1;
}
