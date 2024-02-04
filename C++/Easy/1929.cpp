vector<int> getConcatenation(vector<int>& nums) {
  int n = nums.size();
  for(int i = 0; n > i; i++) 
    nums.push_back(nums[i]);
  return nums;
}
