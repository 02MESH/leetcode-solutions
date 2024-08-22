#include <iostream>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <string>
#include <unordered_set>

using namespace std;

int numDifferentIntegers(string word) {
  unordered_set<string> result;
  for (int i = 0; word.size() > i; i++) {
    if (isdigit(word[i])) {
      while (word.size() > i && word[i] == '0')
        i++;
      string digit = "";
      while (word.size() > i && isdigit(word[i]))
        digit += word[i++];
      result.insert(digit);
    }
  }
  return result.size();
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string test = "1234bc34d8ef34";
  cout<< numDifferentIntegers(test);
  return 1;
}
