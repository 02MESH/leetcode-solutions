#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int largestRectangleArea(vector<int> &heights) {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  stack<pair<int, int>> stack;
  int maxArea = 0;
  for (int i = 0; heights.size() > i; i++) {
    int start = i;
    while (!stack.empty() && stack.top().second > heights[i]) {
      int height = stack.top().second, index = stack.top().first;
      maxArea = max(maxArea, height * (i - index));
      start = index;
      stack.pop();
    }
    stack.push({start, heights[i]});
  }
  while (!stack.empty()) {
    int height = stack.top().second, index = stack.top().first;
    maxArea = max(maxArea, (height * (static_cast<int>(heights.size()) - index)));
    stack.pop();
  }
  return maxArea;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{2, 1, 5, 6, 2, 3};
  cout << largestRectangleArea(test);
  return 1;
}
