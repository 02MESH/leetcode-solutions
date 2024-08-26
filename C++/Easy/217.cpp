#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>
#include <unordered_set>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;
    for(int i = 0; nums.size() > i; i++) {
        if(set.find(nums[i]) != set.end()) return true;
        set.insert(nums[i]);
    }
    return false;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<int> test {1,2,3,1};
  cout << boolalpha << containsDuplicate(test);
  return 1;
}
