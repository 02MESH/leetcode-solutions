int evalRPN(vector<string>& tokens) {
    stack<int> values;
    int value1 = 0;
    int value2 = 0;
    for(auto x : tokens) {
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