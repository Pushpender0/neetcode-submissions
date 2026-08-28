class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int> mp(256, -1);
    int n = s.size();
    int l = 0, r = 0, maxLen = 0;
    while (r < n)
    {
        if (mp[s[r]] != -1)
        { // if in the map
            if (mp[s[r]] >=  l)
            {
                l = mp[s[r]]+1;
            }
        }
        int len = r - l + 1;
        maxLen = max(len, maxLen);
        mp[s[r]] = r;
        r++;
    }
    return maxLen;
    }
};
