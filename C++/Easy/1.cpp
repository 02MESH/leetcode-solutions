#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>
#include <cstring>
#include <unordered_map>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  unordered_map<int, int> numbers;
  numbers.insert({nums[0], 0});
  for(int i = 1; nums.size() > i; i++) {
    int current = nums[i];
    int difference = target - current;
    if(auto search = numbers.find(difference); search != numbers.end())
      return {search->second,i};
    numbers.insert({nums[i], i});
  }
  return {0, 0};
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<int> test {3,2,4};
  test = twoSum(test, 6);
  for(const int x : test)
    std::cout<<x<<", ";
  return 1;
}
