#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int> &nums) {
  int n = nums.size();
  for (int i = 0; n > i; i++)
    nums.push_back(nums[i]);
  return nums;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{1, 2, 3, 4};
  getConcatenation(test);
  for (auto x : test)
    cout << x << ", ";
  return 1;
}
