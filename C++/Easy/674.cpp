int findLengthOfLCIS(vector<int>& nums) {
    int max = 1, counter = 1;
    for(int i = 1; nums.size() > i; i++) {
        if(nums[i] > nums[i-1]) {
            counter++;
            max = (counter > max) ? counter : max;
        } else
            counter = 1;
        }
    return max;
}
