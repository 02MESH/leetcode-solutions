int findFinalValue(vector<int>& nums, int original) {
    sort(nums.begin(), nums.end());
    for(int i = 0; nums.size() > i; i++) {
        if(nums[i] == original) original *= 2;
    }
    return original;
}