class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0;

    int j = numbers.size() - 1;
    while (i < j)
    {
        int a = numbers[i];
        int b = numbers[j];
        if ((a + b) < target)
            i++;
        else if ((a + b) > target)
            j--;
        else
        {
            return {(i + 1), (j + 1)};
        }
    }
    return {-1, -1};
    }
};
