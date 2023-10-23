bool areOccurrencesEqual(string s) {
    std::vector<int> vec (26, 0);
    for(char c : s) vec[c - 'a']++;
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    int i = 0;
    while(26 > i && vec[i] != 0) 
        i++;
    int x = vec[0];
    for(int j = 1; i > j; j++) 
        if(vec[j] != x) return false;
    return true;
}
