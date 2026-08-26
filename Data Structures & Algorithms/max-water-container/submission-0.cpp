class Solution {
public:
    int maxArea(vector<int>& heights) {
    int ans = INT_MIN;

    int i = 0;                  // left
    int j = heights.size() - 1; // right

    while (i < j)
    {

        int area = min(heights[i], heights[j]) * (j - i);
        ans = max(ans, area);
        if (heights[i] < heights[j])
            i++;
        else
            j--;
    }
    return ans;
    }
};
