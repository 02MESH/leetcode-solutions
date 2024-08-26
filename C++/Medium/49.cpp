#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs) {
  unordered_map<string, vector<string>> map;

  for (auto x : strs) {
    string temp = x;
    sort(temp.begin(), temp.end());
    map[temp].push_back(x);
  }

  vector<vector<string>> result;

  for (auto [first, second] : map)
    result.push_back(second);

  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<string> test{"eat", "tea", "tan", "ate", "nat", "bat"};
  auto result = groupAnagrams(test);
  for (auto x : result) {
    for (auto y : x)
      cout << y << ", ";
  }
  return 1;
}
