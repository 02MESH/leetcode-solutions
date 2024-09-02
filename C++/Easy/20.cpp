#include <stack>
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

bool isValid(string s) {
  stack<char> p;
  for (int i = 0; s.size() > i; i++) {
    char current = s[i];
    if (current == '(' || current == '[' || current == '{')
      p.push(current);
    else {
      if (p.empty() || (current == ')' && p.top() != '(') ||
          (current == '}' && p.top() != '{') ||
          (current == ']' && p.top() != '['))
        return false;
      p.pop();
    }
  }
  return p.empty();
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  cout << boolalpha << isValid("([])");
  return 1;
}
