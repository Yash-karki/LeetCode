class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int minLandEnd = INT_MAX, minWaterEnd = INT_MAX;
        int landThenWater = INT_MAX, waterThenLand = INT_MAX;

        for (size_t i = 0; i < landStartTime.size(); ++i) {
            minLandEnd = min(minLandEnd, landStartTime[i] + landDuration[i]);
        }
        for (size_t i = 0; i < waterStartTime.size(); ++i) {
            minWaterEnd =
                min(minWaterEnd, waterStartTime[i] + waterDuration[i]);
        }

        for (size_t i = 0; i < waterStartTime.size(); ++i) {
            landThenWater =
                min(landThenWater,
                    max(minLandEnd, waterStartTime[i]) + waterDuration[i]);
        }
        for (size_t i = 0; i < landStartTime.size(); ++i) {
            waterThenLand =
                min(waterThenLand,
                    max(minWaterEnd, landStartTime[i]) + landDuration[i]);
        }

        return min(landThenWater, waterThenLand);
    }
};
