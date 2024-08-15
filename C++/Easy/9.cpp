#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cmath>
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <map>
#include <numeric>
#include <random>
#include <set>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

bool isPalindrome(int x) {
  if(x < 0) return false;
  long temp = x;
  long reversed = 0;
  while(temp > 0) {
    reversed = (reversed * 10) + static_cast<int>(temp % 10);
    temp /= 10;
  }
  std::cout<<reversed;
  return reversed==x;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  std::cout<<std::boolalpha<<isPalindrome(121)<<std::endl;
  return 1;
}
