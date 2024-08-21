#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

string reversePrefix(string word, char ch) {
  int n = word.find(ch);
  if (n == string::npos)
    return word;
  for (int i = n, j = 0; i >= (n/2)+1; i--, j++)
    std::swap(word[i], word[j]);
  return word;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  cout << reversePrefix("abcdefd", 'd');
  return 1;
}
