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

int differenceOfSums(int n, int m) {
  int divisible = 0, non_divisible = 0;
  for(int i = 1; n >= i; i++) {
    if(i % m == 0) divisible += i;
    else non_divisible += i;
  }
  return non_divisible - divisible;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  std::cout<<differenceOfSums(5, 1);
  return 1;
}
