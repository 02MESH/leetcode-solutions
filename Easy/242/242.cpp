//My solution (has horrendous time and space complexity)
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    for(int i = 0; s.size() > i; i++) {
        if(t.find(s[i]) == std::string::npos) {
            return false;
        } else {
            t.erase(t.find(s[i]), 1);
        }
    }
    return true;
}

/*Better solution using the std library using the class s[i] - 'a' i.e.
 *ASCII approach.       */
bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    std::vector<int> result(26, 0);
    
    for(int i = 0; s.size() > i; i++) {
        result[s[i] - 'a']++;
        result[t[i] - 'a']--;
    }

    for(int i = 0; 26 > i; i++) 
        if(result[i] > 0) return false;
    return true;
}
