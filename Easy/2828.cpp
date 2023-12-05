bool isAcronym(vector<string>& words, string s) {
    if (words.size() != s.size()) return false;
    for (int i = 0; words.size() > i; i++) {
        if(words[i][0] != s[i])
            return false;
    }
    return true;
}
