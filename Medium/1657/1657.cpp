bool closeStrings(string word1, string word2) {
    if(word1.size()!=word2.size())return false;
    std::vector<int> vec1(26,0), vec2(26, 0);
    for(auto x : word1) vec1[x - 'a']++;
    for(auto x : word2) {
        int value = vec1[x - 'a'];
        if(value==0)return false;
        vec2[x - 'a']++;
    }
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    for(int i = 0; 26>i; i++)
        if(vec1[i]!=vec2[i])return false;

    return true;
}
