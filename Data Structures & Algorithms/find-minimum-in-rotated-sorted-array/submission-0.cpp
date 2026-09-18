class Solution {
public:
    int findMin(vector<int> &nums) {
        int target = INT_MAX;
            for (int it : nums)
    {
        target = min(it, target);
    }



    int n = nums.size();
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (target == nums[mid])
        {
            return nums[mid];
        }

        // left sorted part
        if (nums[l] <= nums[mid])
        {
            if (target > nums[mid] or target < nums[l])
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        // right sorted part
        else
        {
            if (target < nums[mid] or target > nums[r])
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
    }
    return -1;
    }
};
