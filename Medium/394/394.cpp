string decodeString(string s) {
    //Stack, one for strings, the other for the repetitions
    std::stack<int> repetitions;
    std::stack<std::string> strings;

    //Final string variable
    std::string digits;
    std::string result;

    for(char x : s) {
        if(isdigit(x)) {
            digits += x;
        } else if(x=='[') {
            int digit = std::stoi(digits);
            digits = "";
            repetitions.push(digit);
            strings.push(result);
            result = "";
        } else if(x==']') {
            //Retrieve the strings
            std::string temp = strings.top();
            strings.pop();
        
            //Retrive the numbers of repetitions in the for loop
            for(int i = 0; repetitions.top() > i; i++) {
                temp += result;
            }
            repetitions.pop();
            result = temp;
        } else {
            result += x;
        }
    }
    return result;
}