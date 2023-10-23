int findMiddleIndex(vector<int>& nums) {
<<<<<<< HEAD
    
=======
>>>>>>> 31d8df287ea5fc40ad3169f620f39785462843bb
    int left = 0;
    int right = 0;
    for(auto x : nums) right+=x;

    for(int i = 0; nums.size() > i; i++) {
<<<<<<< HEAD
        right = right - nums[i];
        if(left == right) {
            return i;
        }
        left += nums[i];
    }
    return -1;
}
=======
      right = right - nums[i];
      if(left == right) {
         return i;
      }
      left += nums[i];
    }

    return -1;
}
>>>>>>> 31d8df287ea5fc40ad3169f620f39785462843bb
