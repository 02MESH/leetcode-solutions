//My solution
int lengthOfLastWord(string s) {
    int counter {0};
    for(int i = s.size()-1; i >= 0; i--) {
        if(isalnum(s[i])) {
            for(int j = i; j >= 0 && isalnum(s[j]); j--)
                counter++;
            break;
        }
    }
    return counter;
}

//Better solution in the sense that it saves a bit of space
int lengthOfLastWord(string s) {
    int counter {0};
    bool flag {false};
    for(int i = s.size()-1; i >= 0; i--) {
        if(!isalnum(s[i]) && flag) return counter;
        else if (isalnum(s[i])) {counter++; flag = true;}
    }
    return counter;
}
