#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <limits>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype

using namespace std;

int maxArea(vector<int> &height) {
  int i = 0, j = height.size() - 1;
  int min = std::numeric_limits<int>::min();
  int result = 0;
  while(j > i) {
    int difference = j - i;
    int less = std::min(height[i], height[j]) * difference;
    result = std::max(less, result);
    if(height[j] > height[i]) i++;
    else j--;
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<int> test {1,8,6,2,5,4,8,3,7};
  std::cout<<maxArea(test);
  return 1;
}
