bool backspaceCompare(string s, string t) {
    std::stack<char> stack1;
    std::stack<char> stack2;
    for(int i = 0; s.size() > i; i++) {
        if(!stack1.empty() && s[i] == '#') stack1.pop();
        else if(isalnum(s[i])) stack1.push(s[i]);
    }
    for(int i = 0; t.size() > i; i++) {
        if(!stack2.empty() && t[i] == '#') stack2.pop();
        else if(isalnum(t[i])) stack2.push(t[i]);
    }
    std::string string1;
    std::string string2;
    while(!stack1.empty()) {
        string1 += stack1.top();
        stack1.pop();
    }
    while(!stack2.empty()) {
        string2 += stack2.top();
        stack2.pop();
    }
    return string1 == string2;
}