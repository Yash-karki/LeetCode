class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int extra = 0;
        int start = 0;
        int total = 0;
        for(int i = 0; i<n; i++){
            int total += gas[i]-cost[i];
            int extra +=gas[i]-cost[i];
            if(extra <0){
                extra = 0;
                start = i+1;
            }
        }
        if(total<0){
            return -1;
        }
        return start;
    }
};