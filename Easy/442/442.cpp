vector<int> findDuplicates(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<int> vec;

    for(int i = 0; nums.size()-1 > i; i++) {
        if(nums[i]!=nums[i+1]) continue;
        else vec.push_back(nums[i]);
    }

    return vec;
}