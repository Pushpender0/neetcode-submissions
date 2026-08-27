class Solution {
public:
    int trap(vector<int>& height) {
            int n = height.size();
    vector<int> lMax(n);
    vector<int> rMax(n);
    int ans = 0;
    lMax[0] = height[0];
    rMax[n - 1] = height[n - 1];
    for (int i = 1; i <= n - 1; i++)
    {
        int lWt = lMax[i - 1];
        lMax[i] = max(lWt, height[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        int rWt = rMax[i + 1];
        rMax[i] = max(rWt, height[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int minValue = min(lMax[i], rMax[i]);
        ans += minValue - height[i];
    }

    return ans;
    }
};
