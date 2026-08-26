class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        set<int> hS; // hash set
        for (int j = i + 1; j < n; j++)
        {
            int third = -(nums[i] + nums[j]);
            if (hS.find(third) != hS.end())
            {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hS.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
    }
};
