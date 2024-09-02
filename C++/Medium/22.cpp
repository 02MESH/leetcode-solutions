#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void backtrack(int n, int open, int close, string permutation,
               vector<string> &result) {
  if (open == close && open == n) {
    result.push_back(permutation);
    return;
  }
  if (n > open)
    backtrack(n, open + 1, close, permutation + "(", result);
  if (open > close)
    backtrack(n, open, close + 1, permutation + ")", result);
}

vector<string> generateParenthesis(int n) {
  vector<string> result;
  int open = 0, close = 0;
  backtrack(n, open, close, "", result);
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  auto test = generateParenthesis(3);
  for (auto x : test)
    cout << x << ", ";
  return 1;
}
