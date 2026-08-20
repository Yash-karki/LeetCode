class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        int n = weights.size();
        for(int i = 0; i<n; i++){ // maxCapacity
            high+=weights[i];
        }
        for(int i = low; i<high; i++){ // capacity
            int currWt = 0; 
            int daysreq = 1;
            for(int j = 0; j<n; j++){

                if(currWt + weights[j] > i){
                    daysreq++;
                    currWt = 0;
                }
                currWt += weights[j];
            }
            if(daysreq <= days){
                return i;
            }
        }
        return -1;
    }
};