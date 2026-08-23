class Solution {
public:
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    sort(nums.begin(), nums.end()); // sorting
    int maxLen = INT_MIN;
    int curr = 1;
    int prev = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            continue;
        }
        else if (nums[i] == 1 + prev)
        {
            prev = nums[i];
            curr++;
        }
        else if (nums[i] != 1 + nums[i - 1])
        {
            maxLen = max(curr, maxLen);
            prev = nums[i];
            curr = 1;
        }
    }
    maxLen = max(curr, maxLen);

    return maxLen;
}


};
