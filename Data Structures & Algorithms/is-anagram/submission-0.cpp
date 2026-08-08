class Solution {
public:
    bool isAnagram(string s, string t) {
            unordered_map<char,int> mp1,mp2;
    if(s.size() != t.size()){
            return false;
        }

        for(char ch: s) mp1[ch]++;
        for(char ch: t) mp2[ch]++;

        for(char ch='a'; ch<'z';ch++){
            if(mp1[ch] != mp2[ch] ) return false;
        }
         return true;

    }
};
