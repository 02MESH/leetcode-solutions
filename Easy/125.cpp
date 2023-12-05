//My solution: Bad time as well as space complexity
bool isPalindrome(string s) {
    std::string result;
    for(auto x : s) {
        if (isalpha(x))
            result.push_back(tolower(x));
        else if (isdigit(x))
            result.push_back(x);
    }
    for(int i = 0, j = result.size()-1; result.size()/2 > i; i++, j--) {
        if (result[i] != result[j])
            return false;
    }
    return true;
}

//Better solution
bool isPalindrome(string s) {
    int start = 0;
    int end = s.size()-1;
    while(end >= start) {
        if(!isalnum(s[start])) {start++; continue;}
        if(!isalnum(s[end])) {end--; continue;}
        if(tolower(s[start]) != tolower(s[end])) return false;
        else {
            start++;
            end--;
        }
    }
    return true;
}
