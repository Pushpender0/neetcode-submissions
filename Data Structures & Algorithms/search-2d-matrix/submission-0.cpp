class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            for (auto &row : matrix)
    {
        for (int val : row)
        {
            if (target == val)
                return true;
        }
    }
    return false;
    }
};
