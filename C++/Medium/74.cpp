class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int index = 0;
        int size = matrix[0].size() - 1;
        for(int i = 0; matrix.size() > i; i++) {
            if(matrix[i][0] <= target && matrix[i][size] >= target) {
                index = i;
                break;
            }
        }
        int low = 0, mid, high = matrix[index].size() - 1;
        while(high >= low) {
            mid = (low + high) / 2;
            if(matrix[index][mid]==target) return true;
            else if(target > matrix[index][mid]) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};