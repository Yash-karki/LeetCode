class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        // vector<int> temp(k);
        // for(int i = n-k; i<n; i++){
        //     temp.push_back(arr[i]);
            
        // }
        // for(int i = n-1; i>=k; i--){
        //     arr[i] = arr[i-k];
        // }
        // for(int i = 0; i<k; i++){
        //     arr[i] = temp[i];
        // }
        
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
    }
};