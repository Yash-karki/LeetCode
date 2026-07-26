

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int val:nums1){
            if(!mp[val]) mp[val]++;
        }
        for(int val:nums2){
            if(mp[val]==1){
                ans.push_back(val);
                mp[val]++;
            }
        }
        return ans;
    }
};