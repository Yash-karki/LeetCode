class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;// 0 3 4
        int high = n-1; // 4 3
        while(low<=high){ 
            int mid = low+(high-low)/2; // 2 3 4
            int miss = arr[mid]-(mid+1); // 1 3 6
            if(miss<k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return k+high+1; // 5+3+1
    }
};