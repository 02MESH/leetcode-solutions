// Incomplete
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

class Solution {
public:
  vector<vector<string>> solveNQueens(int n) {
    unordered_set<pair<int, int>> columns;
    unordered_set<pair<int, int>> posDiag;
    unordered_set<pair<int, int>> negDiag;

    vector<vector<string>> res;
    vector<string> board(n, string(n, '.'));
  }

private:
  void backtrack(int r, int n, unordered_set<int> &col,
                 unordered_set<int> &posDiag, unordered_set<int> &negDiag,
                 vector<string> &board, vector<vector<string>> &res) {}
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)

  return 1;
}
