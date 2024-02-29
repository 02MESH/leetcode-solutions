vector<int> twoSum(vector<int>& numbers, int target) {
    std::vector<int> result(2, 0);
    int i = 0, j = numbers.size() - 1;
    while(j > i) {
        int value = numbers[i] + numbers[j];
        if(value==target) break;
        else if(value > target) j--;
        else i++;
    }
    result[0] = i+1;
    result[1] = j+1;
    return result;
}

//more space-efficient
vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int, int> hashmap;
    int difference = 0;
    for(int i = 0; numbers.size() > i; i++) {
        difference = target - numbers[i];
        if(auto search = hashmap.find(difference); search != hashmap.end())
            return {(search->second+1), (i+1)};
        else
            hashmap[numbers[i]] = i;
    }
    return {-1,-1};
}

//hashmap approach
vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int, int> hashmap;
    int difference = 0;
    for(int i = 0; numbers.size() > i; i++) {
        difference = target - numbers[i];
        if(auto search = hashmap.find(difference); search != hashmap.end())
            return {(search->second+1), (i+1)};
        else
            hashmap[numbers[i]] = i;
    }
    return {-1,-1};
}