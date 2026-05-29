class Solution {
public:
    int countBits(int n) {
        int count = 0;
        while (n) {
            n = n & (n - 1); 
            count++;
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(), arr.end(), [this](int a, int b) {
            
            int countA = countBits(a);
            int countB = countBits(b);
            
            if (countA == countB)
                return a < b;
            
            return countA < countB;
        });
        
        return arr;
    }
};