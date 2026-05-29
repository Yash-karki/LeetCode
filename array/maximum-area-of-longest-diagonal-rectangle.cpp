class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxdiag = 0;
        int maxarea = 0;
        for(auto &i: dimensions){
            int l = i[0];
            int b = i[1];
            double diag = sqrt(1.0*l*l + 1.0*b*b);
            int area = l*b;

            if (diag > maxdiag) {
                maxdiag = diag;
                maxarea = area;
            } 
            else if (abs(diag - maxdiag) < 1e-9) {
                maxarea = max(maxarea, area);
            }
        }
        return maxarea;
        }
    };
