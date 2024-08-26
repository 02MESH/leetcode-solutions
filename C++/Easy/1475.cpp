#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

vector<int> finalPrices(vector<int> &prices) {
  for (int i = 0; prices.size() > i; i++) {
    for (int j = i + 1; prices.size() > j; j++) {
      if (prices[i] >= prices[j]) {
        prices[i] -= prices[j];
        break;
      }
    }
  }
  return prices;
}
int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> prices{8, 4, 6, 2, 3};
  finalPrices(prices);
  for (int x : prices)
    cout << x << ", ";
  return 1;
}
