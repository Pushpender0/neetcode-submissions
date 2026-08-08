class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = nums.size();
                unordered_map<int ,int> mp;
        for(int i=0;i<s;i++){
            int curVal = nums[i];
            int secVal = target - curVal;
            if(mp.find(secVal) != mp.end()){
                return {mp[secVal],i};
            }
            mp[curVal] = i;
        }

        return {};
        

    }
};
