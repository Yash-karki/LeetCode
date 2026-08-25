/*
day 0 -> plant 1
day 1 -> plant 1 grow , plant 2
day 2 -> plant 1 grow, plant 2
day 3 -> plant 1 bloom, plant 2 grow, plant 3
day 4 -> plant 2 bloom, plant 3
day 5 -> plant 3 
day 6 -> plant 3 grow, plant 4
day 7 -> plant 3 grow, plant 4
day 8 -> plant 3 bloom, plant 4 grow
day 9 -> plant 4 bloom


*/

class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        int m = growTime.size();
        int mini = *min_element(growTime.begin(),growTime.end());
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += plantTime[i];
        }
        return sum+mini;
    }
};