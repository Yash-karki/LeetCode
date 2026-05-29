class Solution {
public:
    int maximum69Number (int num) {
        vector<int> vec;
        while(num > 0){
            int digit = num%10;
            vec.push_back(digit);
            num /= 10;
        }
        reverse(vec.begin(), vec.end());
        for(int i = 0; i<vec.size();i++){
            if(vec[i]== 6){
               vec[i] = 9;
                break;
            }
        }
        int result = 0;
        for(int i : vec){
            result = result*10;
            result = result + i;
        }
        return result;
        
    }
};