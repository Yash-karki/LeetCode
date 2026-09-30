class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        for(auto it : nums){
            string s; 
            while(it > 0){
                int p = 1;
                int cnt = 0;
                while(p*2 <= it && cnt <25){
                    p*=2;
                    cnt++;
                }
                s+= char('a'+cnt);
                it-=p;
            }
            ans.push_back(s);
            
        }
        return ans;
    }
};