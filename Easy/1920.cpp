vector<int> buildArray(vector<int>& nums) {
    std::vector<int> result(nums.size(), 0);
    for(int i = 0; nums.size() > i; i++) {
        int x = nums[i];
        result[i] = nums[x];
    }
    return result;
}
