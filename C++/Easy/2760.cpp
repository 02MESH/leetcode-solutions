#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <cmath>
#include <tuple>
#include <numeric>
#include <random>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype

using namespace std;

int longestAlternatingSubarray(vector<int>& nums, int threshold) {
  int count = 0;
  for(int i = 0; nums.size() > i; i++) {

  }
  return count;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<int> nums {2,3,4,5}; int threshold = 4;
  cout<<longestAlternatingSubarray(nums, 4);
  return 1;
}
