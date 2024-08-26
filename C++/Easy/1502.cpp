#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>

using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr) {
  if (arr.size() <= 2)
    return true;
  sort(arr.begin(), arr.end());
  int difference = arr[1] - arr[0];
  for (size_t i = 2; arr.size() > i; i++)
    if (arr[i] - arr[i - 1] != difference)
      return false;
  return true;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{3, 5, 1};
  cout << boolalpha << canMakeArithmeticProgression(test);
  return 1;
}
