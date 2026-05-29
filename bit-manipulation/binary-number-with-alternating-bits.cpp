class Solution {
public:
    bool hasAlternatingBits(int num) {
        string binary = "";
        while (num > 0) {
            binary += (num % 2) + '0';
            num /= 2;
        }
        int n = binary.size();
        for (int i = 0; i<n-1; i++){
            if(binary[i] == binary[i+1]){
                return false;
            }
        }
        return true;
    }
};