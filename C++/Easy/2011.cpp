#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
  int result = 0;
  for(auto x : operations) {
    if(x == "--X" || x == "X--") result--;
    else result++;
  }
  return result;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<string> test {"--X", "X++", "X++"};
  std::cout<<finalValueAfterOperations(test);
  return 1;
}
