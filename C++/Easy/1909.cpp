#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <vector>

using namespace std;

bool strictly(vector<int> &nums, int index) {
  vector<int> temp = nums;
  temp.erase(temp.begin() + index);
  for (int i = 1; temp.size() > i; i++) {
    if (temp[i - 1] >= temp[i])
      return false;
  }
  return true;
}

bool canBeIncreasing(vector<int> &nums) {
  for (int i = 1; nums.size() > i; i++) {
    if (nums[i] <= nums[i - 1])
      return strictly(nums, i - 1) || strictly(nums, i);
  }
  return true;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<int> test{1, 2, 10, 5, 7};
  return 1;
}

// Solution 2
//  class Solution {
//  public:
//  vector<int> removeElements(std::vector<int> nums, int elementIndex) {
//      vector<int> newnums;
//      for (int i = 0; nums.size() > i; i++) {
//          if (i != elementIndex)
//              newnums.push_back(nums[i]);
//      }
//      return newnums;
//  }
//
//  bool isIncreasing(std::vector<int> nums) {
//      for(int i = 1; nums.size() > i; i++) {
//          if (nums[i-1] >= nums[i])
//              return false;
//      }
//      return true;
//  }
//
//  bool canBeIncreasing(vector<int> nums) {
//      for (int i = 1; nums.size() > i; i++) {
//          if (nums[i-1] >= nums[i])
//              return isIncreasing(removeElements(nums, i)) ||
//              isIncreasing(removeElements(nums, i-1));
//      }
//      return true;
//  }
//  };

//  Solution 3
// class Solution {
// public:
//     bool canBeIncreasing(vector<int>& nums) {
//         int cnt = 0;
//         
//         for(int i = 1;i<nums.size();i++){
//            
//             if(nums[i-1]>=nums[i]){
//                 if(cnt==1)
//                 return false;
//
//                 cnt++;
//
//                 if(i>1 && nums[i]<=nums[i-2])
//                 nums[i]= nums[i-1];           
//                                                 
//             }
//         }
//         return true;
//     }
// };
