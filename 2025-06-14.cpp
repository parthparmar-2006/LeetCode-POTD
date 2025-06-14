class Solution {
public:
    string getMax(int num) {
        string s = to_string(num);
        bool isMapped = false;
        char map;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='9' && !isMapped) continue;
            if (!isMapped) {
                map = s[i];
                isMapped = true;
            }
            if (s[i]==map) s[i] = '9';
        } return s;
    }
    string getMin(int num) {
        string s = to_string(num);
        char map = s[0];
        for (int i=0; i<s.size(); i++) {
            if (s[i]==map) s[i]='0';
        } return s;
    }
    int minMaxDifference(int num) {
        return (stoi(getMax(num))- stoi(getMin(num)));
    }
};
