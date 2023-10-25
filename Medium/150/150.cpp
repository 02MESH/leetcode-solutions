int evalRPN(vector<string>& tokens) {
    int x = 0;
    std::stack<int> stack1;

    for(int i = 0; tokens.size() > i; i++) {
        if(tokens[i] != "*" && tokens[i] != "/" && tokens[i] != "+" && tokens[i] != "-") {
            stack1.push(std::stoi(tokens[i]));
        } else {
            int a = stack1.top(); stack1.pop();
            int b = stack1.top(); stack1.pop();
            if(tokens[i]=="*"){
                x = a * b;
            } else if(tokens[i]=="+") {
                x = a + b;
            } else if(tokens[i]=="-") {
                x = b-a;
            } else {
                x = b/a;
            }
            stack1.push(x);
        }
    }
    return stack1.top();
}
