bool containsNearbyDuplicate(vector<int>& nums, int k) {
    std::unordered_map<int, int> map;
    for(int i = 0; nums.size() > i; i++) {
        if(map.count(nums[i]) && abs(map[nums[i]] - i) <= k) {
            return true;
        } else {
            map[nums[i]] = i;
        }
    }
    return false;
}
