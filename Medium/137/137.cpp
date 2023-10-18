int singleNumber(vector<int>& nums) {
    std::unordered_map<int, int> result;
    for(int i = 0; nums.size() > i; i++) result[nums[i]]++;
    for(auto const x : result) if (x.second == 1) return x.first;
    return -1;
}
