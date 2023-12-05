//Read the problem description, it says the longest one
int longestAlternatingSubarray(vector<int>& nums, int threshold) {
    int count = 0;
    for(int i = 0; nums.size() > i; i++) {
        if(nums[i] <= threshold && nums[i] % 2 == 0) {
            count = max(count, 1);
            for(int j = i + 1; nums.size() > j; j++) {
                if (nums[j]%2 != nums[j-1]%2 && nums[j] <= threshold)
                    count = max(count, j - i + 1);
                else {
                    i = j - 1;
                    break;
                }
            }
        }
    }
    return count;
}
