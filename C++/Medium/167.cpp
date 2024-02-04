vector<int> twoSum(vector<int>& numbers, int target) {
    std::vector<int> result(2, 0);
    int i = 0, j = numbers.size() - 1;
    while(j > i) {
        int value = numbers[i] + numbers[j];
        if(value==target) break;
        else if(value > target) j--;
        else i++;
    }
    result[0] = i+1;
    result[1] = j+1;
    return result;
}