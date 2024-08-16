#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string multiply(string num1, string num2) {
  if (num1 == "0" || num2 == "0")
    return "0";

  int one = num1.size(), two = num2.size();
  vector<int> arr(one + two, 0);

  for (int i = one - 1; i >= 0; i--) {
    for (int j = two - 1; j >= 0; j--) {
      arr[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
      arr[i + j] += arr[i + j + 1] / 10;
      arr[i + j + 1] %= 10;
    }
  }

  string result;
  int i = (arr[0] == 0) ? 1 : 0;
  while (arr.size() > i)
    result += to_string(arr[i++]);

  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string num1 = "123";
  string num2 = "456";
  std::cout << multiply(num1, num2);
  return 1;
}
