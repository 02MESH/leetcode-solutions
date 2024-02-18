#include <unordered_map>
#include <iostream>
#include <vector>

std::vector<int> numberOfPairs(std::vector<int>& nums) {
    std::unordered_map<int, int> result;
    for(int i = 0; nums.size() > i; i++) result[nums[i]]++;
    int count1 = 0, count2 = 0;
    for(auto x : result) {
        if(x.second % 2 == 1) count2++;
        count1 += x.second / 2;
    }
    return {count1, count2};
}

int main() {
    std::vector<int> test {1,3,2,1,3,2,2};
    numberOfPairs(test);
    return 1;
}