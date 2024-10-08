#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> numbers;
  for (int i = 0; nums.size() > i; i++) {
    int complement = target - nums[i];
    if (auto search = numbers.find(complement); search != numbers.end())
      return {search->second, i};
    numbers.insert({nums[i], i});
  }
  return {0, 0};
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // (For debugging the buffer correctly)
  vector<int> test{3, 2, 4};
  test = twoSum(test, 6);
  for (const int x : test)
    std::cout << x << ", ";
  return 1;
}
