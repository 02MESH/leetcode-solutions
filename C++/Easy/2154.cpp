#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype

using namespace std;

int findFinalValue(vector<int>& nums, int original) {
  sort(nums.begin(), nums.end());
  for(int i = 0; nums.size() > i; i++)
    if(nums[i] == original) original *= 2;
  return original;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<int> test {5,3,6,1,12};
  cout<<findFinalValue(test, 3);
  return 1;
}
