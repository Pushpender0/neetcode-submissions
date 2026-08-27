class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int maxp = 0;
    int profit = 0;
    int i = 0;
    int j = 1;
    while (j < prices.size())
    {
        if (prices[i] < prices[j])
        {
            profit = prices[j] - prices[i];
            maxp = max(maxp, profit);
        }
        else
            i = j;

        j++;
    }

    return maxp;
    }
};
