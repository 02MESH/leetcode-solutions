#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
  unordered_map<int, int> map;
  for (int x : nums)
    map[x]++;

  vector<vector<int>> vec(nums.size() + 1);
  for (auto i = map.begin(); i != map.end(); i++)
    vec[i->second].push_back(i->first);

  nums.clear();
  for (int i = vec.size() - 1; i >= 0; i--) {
    for (int j = 0; vec[i].size() > j; j++) {
      if (k > 0) {
        nums.push_back(vec[i][j]);
        k--;
      }
    }
  }
  return nums;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{1, 1, 1, 2, 2, 3};
  test = topKFrequent(test, 2);
  for (auto x : test)
    cout << x << ", ";
  return 1;
}
