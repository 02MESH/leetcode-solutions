int singleNumber(vector<int>& nums) {
    int result = nums[0];
    for(int i = 1; nums.size() > i; i++)
        result ^= nums[i];
    return result;
}
