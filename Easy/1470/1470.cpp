vector<int> shuffle(vector<int>& nums, int n) {
    std::vector<int> result;
    for (int i = 0; n > i; i++) {
        result.push_back(nums[i]);
        result.push_back(nums[n+i]);
    }
    return result;
}
