class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        // int n = start[0] + start[1];
        // int sqrColor;
        // if(n%2){
        //     sqrColor = 1;
        // }
        // else{
        //     sqrColor = 0;
        // }
        // n = target[0] + target[1];
        // if((n%2 && sqrColor) || (n %2 == 0 && sqrColor == 0)){
        //     return true;
        // }
        // return false;

        int sum = abs(start[0] - target[0]) + abs(start[1] - target[1]);
        if(sum % 2 == 0) return true;
        return false;

    }
};