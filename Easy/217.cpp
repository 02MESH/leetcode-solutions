bool containsDuplicate(vector<int>& nums) {
    std::unordered_set<int> set;
    for(int i = 0; nums.size() > i; i++) {
        if(set.count(nums[i])) return true;
        else set.insert(nums[i]);
    }
    return false;
}