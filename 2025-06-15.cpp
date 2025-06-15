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
        char map, val;
        bool isMapped = false;
        if (s[0]!='1') {
            isMapped = true;
            map = s[0];
            val = '1';
        }
        for (int i=0; i<s.size(); i++) {
            if (s[i]<='1' && !isMapped) continue;
            if (!isMapped) {
                isMapped = true;
                map = s[i];
                val = '0';
            }
            if (s[i]==map) s[i] = val;
        } return s;
    }
    int maxDiff(int num) {
        return (stoi(getMax(num))- stoi(getMin(num)));
    }
};
