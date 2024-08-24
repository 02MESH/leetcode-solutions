#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int> &gain) {
  int moving = 0, max = 0;
  for (int i = 0; gain.size() > i; i++) {
    moving += gain[i];
    max = std::max(max, moving);
  }
  return max;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{-5, 1, 5, 0, -7};
  cout << largestAltitude(test) << endl;
  return 1;
}
