#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <vector>
#include <string>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <stack>

using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> values;
    int value1 = 0;
    int value2 = 0;
    for(const string& x : tokens) {
        if(x!="*"&&x!="-"&&x!="/"&&x!="+")
            values.push(stoi(x));
        else {
            value1 = values.top();
            values.pop();
            value2 = values.top();
            values.pop();
            if(x=="+") 
                value2 += value1;
            else if(x=="-")
                value2 -= value1;
            else if(x=="*")
                value2 *= value1;
            else
                value2 /= value1;
            values.push(value2);
            value1 = 0; value2 = 0;
        }
    }
    return values.top();
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); //For debugging the buffer correctly)
  vector<string> test {"2", "1", "+", "3", "*"};
  cout << evalRPN(test);
  return 1;
}
