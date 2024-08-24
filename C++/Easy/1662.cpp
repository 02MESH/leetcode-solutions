#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    std::string string1;
    std::string string2;
    for(auto x : word1) string1+=x;
    for(auto x : word2) string2+=x;
    return string1==string2;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<string> v1 {"ab", "c"};
  vector<string> v2 {"a", "bc"};
  cout<<boolalpha<<arrayStringsAreEqual(v1, v2);
  return 1;
}
