class Solution {
public:
    string largestGoodInteger(string num){
        string best = "";
        if(num.length()<3){
            return "";
        }
        for(int i =0; i<num.length()-2;i++){
            if((num[i] == num[i+1]) && (num[i+1] == num[i+2])){
                    string candidate = num.substr(i,3);
                if(candidate > best){
                    best = candidate;
                }
                }
            }
        return best;
    }
};