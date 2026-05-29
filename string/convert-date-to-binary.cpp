class Solution {
public:
    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));

        string binary1 = "";
        while (y > 0) {
            binary1 = char('0' + (y % 2)) + binary1;
            y /= 2;
        }

        string binary2 = "";
        while (m > 0) {
            binary2 = char('0' + (m % 2)) + binary2;
            m /= 2;
        }

        string binary3 = "";
        while (d > 0) {
            binary3 = char('0' + (d % 2)) + binary3;
            d /= 2;
        }

        return binary1 + "-" + binary2 + "-" + binary3;
    }
};