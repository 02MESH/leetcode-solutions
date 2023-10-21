string mergeAlternately(string word1, string word2) {
    int i = 0, j = 0;
    int first = word1.size(), second = word2.size();
    std::string result;
    while(first > i || second > j) {
        if(first > i) {
            result.push_back(word1[i]);
            i++;
        }
        if(second > j) {
            result.push_back(word2[j]);
            j++;
        }
    }
    return result;
}
