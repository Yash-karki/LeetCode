class Solution {
public:
    vector<int> factors(int n) {
        vector<int> ans;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);

                while (n % i == 0) {
                    n /= i;
                }
            }
        }
        if (n > 1)
            ans.push_back(n);

        return ans;
    }
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        set<int> st;
        unordered_map<int, int> freq;

        vector<vector<int>> facs(n);
        for (int i = 0; i < n; i++) {
            facs[i] = factors(nums[i]);
        }
        int left = 0;
        int ans = 0;
        for (int right = 0; right < n; right++) {
            for(int p : facs[right]){
                st.insert(p);
                freq[p]++;
            }
            while(st.size() > k){
                for(int p : facs[left]){
                    freq[p]--;
                    if(freq[p] == 0)
                        st.erase(p);
                }
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};