int maxArea(vector<int>& height) {
    int mostWater = -1;
    int left = 0;
    int right = height.size() - 1;
    while(right > left) {
        int difference = right - left;
        int current = min(height[left], height[right]) * difference;
        mostWater = max(current, mostWater);
        if(height[left] > height[right]) {
            right--;
        } else {
            left++;
        }
    }
    return mostWater;
}
