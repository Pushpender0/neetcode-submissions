class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
    vector<int> arr;
    int i = 0, j = 0;
    int n1 = nums1.size();
    int n2 = nums2.size();

    while (i < n1 and j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            arr.push_back(nums1[i++]);
        }
        else
        {
            arr.push_back(nums2[j++]);
        }
    }
    // left over parts of nums1 and nums2
    while (i < n1)
    {
        arr.push_back(nums1[i++]);
    }
    while (j < n2)
    {
        arr.push_back(nums2[j++]);
    }

    int n = arr.size();
    if (n % 2 == 1)
    {
        return arr[n / 2];
    }
    return ((arr[n / 2 - 1] + arr[n/2]) / 2.0);
    }
};
