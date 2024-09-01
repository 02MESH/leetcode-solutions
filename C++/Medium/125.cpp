#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
  int left = 0, right = s.size() - 1;
  while (right > left) {
    while (!isalnum(s[left]) && left < right)
      left++;
    while (!isalnum(s[right]) && left < right)
      right--;
    if (tolower(s[right]) != tolower(s[left]))
      return false;
    left++;
    right--;
  }
  return true;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  cout << boolalpha << isPalindrome("A man, a plan, a canal: Panama");
  return 1;
}
