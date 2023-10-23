int findMiddleIndex(vector<int>& nums) {
    int left = 0;
    int right = 0;
    for(auto x : nums) right+=x;

    for(int i = 0; nums.size() > i; i++) {
        right = right - nums[i];
        if(left == right) {
            return i;
        }
        left += nums[i];
    }
    return -1;
}
