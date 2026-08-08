class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

           unordered_set<int> hS;
        for (int i = 0; i < nums.size(); i++)
         {
            if(hS.contains(nums[i])){
                // cout<<"true"<<endl;
                return true;
            }
            hS.insert(nums[i]);
        }        
        
        
        return false;
        
    }
};