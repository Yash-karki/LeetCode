class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int lcnt = 0;
        int rcnt = 0;
        int ucnt = 0;
        for(int i = 0; i<n; i++){
            if(moves[i] == 'L'){
                lcnt++;
            }else if(moves[i] == 'R'){
                rcnt++;
            }else if(moves[i] == '_'){
                ucnt++;
            }
        }
        if(lcnt>rcnt){
            lcnt += ucnt;
        }else{
            rcnt += ucnt;
        }
        return abs(lcnt-rcnt);
    }
};