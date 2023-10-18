//Initial solution. However, this is wrong
int numDifferentIntegers(string word) {
    std::unordered_map<long long, int> map;
    for(int i = 0; word.size() > i; i++) {
        if(isdigit(word[i])) {
            std::string num;
            for(int j = i+1; word.size() > i && isdigit(word[i]); i++) {
                num.push_back(word[i]);
            }
            long long convert = std::stoi(num);
            map[convert]++;
        }
    }
    int counter = 0;
    for(auto x : map) counter++;
    return counter;
}

//The better solution is
int numDifferentIntegers(string word) {
    std::unordered_set<std::string> result;
    for(int i = 0; word.size() > i; i++) {
        if(isdigit(word[i])) {
            std::string temp;
            while(word[i] == '0' && word.size() > i) i++;
            while(isdigit(word[i]) && word.size() > i) {
                temp.push_back(word[i]);
                i++;
            }
            result.insert(temp);
        }
    }
    return result.size();
}
