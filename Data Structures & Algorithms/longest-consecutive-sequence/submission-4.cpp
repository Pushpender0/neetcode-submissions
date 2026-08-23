class Solution {
public:
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;

    int maxLen = INT_MIN;

    unordered_set<int> st;
    for (auto it : nums)
        st.insert(it); // this will insert the ele in nums
    for (auto it : st)
    {
        int val = it;
        if (st.find(val - 1) == st.end())
        {
            int curr = 1;
            int prev = val;
            while (st.find(prev + 1) != st.end())
            {
                curr++;
                prev = prev + 1;
            }
            maxLen = max(curr, maxLen);
        }
    }
    return maxLen;
}


};
