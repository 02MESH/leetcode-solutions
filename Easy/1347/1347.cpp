int minSteps(string s, string t) {
    if(s.size() != t.size()) return 0;
    int count = 0;
    vector<int> vec (26,0);
    for(int i = 0; t.size() > i; i++) vec[t[i]-'a']++;
    for(int i = 0; s.size() > i; i++) {
        if(vec[s[i] - 'a'] > 0) vec[s[i] - 'a']--;
        else count++;
    }
    return count;
}
