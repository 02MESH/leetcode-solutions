#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>> &accounts) {
  int lowest = std::numeric_limits<int>::min();
  for (int i = 0; accounts.size() > i; i++) {
    int sum = 0;
    for (int j = 0; accounts[i].size() > j; j++) {
      sum += accounts[i][j];
    }
    if (sum > lowest)
      lowest = sum;
  }
  return lowest;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<vector<int>> test{{1, 5}, {7, 3}, {3, 5}};
  cout << maximumWealth(test);
  return 1;
}
