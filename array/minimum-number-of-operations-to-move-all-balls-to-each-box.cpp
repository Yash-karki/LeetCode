class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer;
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = 0; j<n; j++){
                if(boxes[j] == '1' && j!=i){
                    sum = sum + abs(j-i);
                }
            }
            answer.push_back(sum);
        }
        return answer;
    }
};