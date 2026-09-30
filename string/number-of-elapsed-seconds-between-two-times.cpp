class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        string startHr = startTime.substr(0,2);
        string startMin = startTime.substr(3,2);
        string startSec = startTime.substr(6,2);
        string endHr = endTime.substr(0,2);
        string endMin = endTime.substr(3,2);
        string endSec = endTime.substr(6,2);

        int a = stoi(startHr);
        int b = stoi(startMin);
        int c = stoi(startSec);
        int x = stoi(endHr);
        int y = stoi(endMin);
        int z = stoi(endSec);
        a *= 3600;
        b *= 60;
        x *= 3600;
        y *= 60;

        return (x+y+z)-(a+b+c);
    }
};