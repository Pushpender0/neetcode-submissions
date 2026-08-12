class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> mp;
    for (int num : nums)
        mp[num]++;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // heap

    for (auto it : mp)
    {
        pq.push({it.second, it.first});

        if (pq.size() > k)
            pq.pop();
    }
    vector<int> ans;

    while (!pq.empty())
    {
        int val = pq.top().second;
        pq.pop();
        ans.push_back(val);
    }

    return ans;
    }
};
