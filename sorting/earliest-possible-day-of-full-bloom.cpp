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
        vector<pair<int,int>> pr;
        int plantSum = 0;
        for(int i = 0; i<n; i++){

            pr.push_back({growTime[i],plantTime[i]});
        }
        sort(pr.rbegin(),pr.rend());
        int growMax = 0;
        for(auto it : pr){
            int grow = it.first;
            int plant = it.second;
            plantSum += plant;
            growMax = max(growMax, plantSum+grow);
        }
        return growMax;
    }

};