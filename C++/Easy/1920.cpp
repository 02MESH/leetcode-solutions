#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int> &nums) {
  vector<int> result (nums.size() , 0);
  for (int i = 0; nums.size() > i; i++)
    result[i] = nums[nums[i]];
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{0, 2, 1, 5, 3, 4};
  auto haha = buildArray(test);
  for (int x : haha)
    cout << x << ", ";
  return 1;
}
