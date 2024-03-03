int singleNumber(vector<int>& nums) {
    std::unordered_map<int, int> result;
    for(int i = 0; nums.size() > i; i++) result[nums[i]]++;
    for(auto const x : result) if (x.second == 1) return x.first;
    return -1;
}

//new version
int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int result = 0;
    int j;
    int count = 1;
    for(int i = 0; nums.size() > i;) {
        count = 1;
        j = i + 1;
        while(nums.size() > j && nums[i] == nums[j]) {
            count++;
            j++;
        }
        if(count == 1){
            result = nums[i];
            break;
        }
        i = j;
    }
    return result;
}

//better version
int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size() - 1;
    int i = 0;
    while(n > i) { //It will never reach the last element
        if(nums[i] == nums[i+1]) {
            i+=3; //Increase the index to the fresh element
        } else
            return nums[i]; //If in the middle of the collection
    }
    return nums[n]; //Never got to the last element, so return this
}