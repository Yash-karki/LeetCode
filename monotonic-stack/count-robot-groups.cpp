class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n = position.size();
        vector<pair<int,int>> pr;
        for(int i = n-1; i>= 0; i--){
            int currp = position[i];
            int currv = speed[i];

            while(!pr.empty()){
                int rightp = pr.back().first;
                int rightv = pr.back().second;

                if(rightp - currp <= distance){
                    pr.pop_back();
                    // currp = rightp;
                    currv = rightv;
                    continue;
                }

                if(currv <= rightv){
                    break;
                }

                pr.pop_back();
                // currp = rightp;
                currv = rightv;
            }
            pr.push_back({currp,currv});
        }
        return pr.size();
        
    }
};