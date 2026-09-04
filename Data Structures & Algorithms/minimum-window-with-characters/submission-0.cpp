class Solution {
public:
    string minWindow(string s, string t) {
            int n = s.size(), m = t.size();
    int hash[256] = {0};
    int l = 0, r = 0, minLen = INT_MAX, sIdx = -1, cnt = 0;
    for (int i = 0; i < m; i++)
    {
        hash[t[i]]++; // puting ele of t in hash
    }
    while (r < n)
    {
        if (hash[s[r]] > 0){
            cnt += 1;
        }
        hash[s[r]]--;

            

        while (cnt == m)
        {
            if (r - l + 1 < minLen)
            {
                minLen = r - l + 1;
                sIdx = l;
            }
            hash[s[l]]++;
            if (hash[s[l]] > 0)
                cnt -= 1;
            l++;
        }
        r = r + 1;
    }
    return sIdx == -1 ? "" : s.substr(sIdx, minLen);
    }
};
