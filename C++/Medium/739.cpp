#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures) {
  stack<int> temp;
  vector<int> result(temperatures.size(), 0);
  for (int i = 0; temperatures.size() > i; i++) {
    while (!temp.empty() && temperatures[i] > temperatures[temp.top()]) {
      result[temp.top()] = i - temp.top();
      temp.pop();
    }
    temp.push(i);
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{73, 74, 75, 71, 69, 72, 76, 73};
  auto result = dailyTemperatures(test);
  for (auto x : result)
    cout << x << ", ";
  return 1;
}
