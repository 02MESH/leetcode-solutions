bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    std::string string1;
    std::string string2;
    for(auto x : word1) string1+=x;
    for(auto x : word2) string2+=x;
    return string1==string2;
}
