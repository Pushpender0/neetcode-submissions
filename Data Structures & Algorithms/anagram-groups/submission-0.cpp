class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
                unordered_map<string,vector<string>>mp;//hashmap
        vector<vector<string>> ans;
        for(string str:strs){
            string org = str;
            sort(str.begin(),str.end());// sorting
            mp[str].push_back(org);
        }

        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
