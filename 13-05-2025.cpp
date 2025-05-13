class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        long long mod = 1e9 + 7;
        vector<long long> arr(26, 0);
        for (int i=0; i<s.size(); i++) arr[s[i]-'a']++;
        for (int j=0; j<t; j++) {
            vector<long long> temp(26, 0);
            for (int i=0; i<25; i++) {
                temp[i+1] = arr[i]%mod;
            }
            temp[0] = arr[25];
            temp[1] += arr[25];
            arr = temp;
        }
        long long res = 0;
        for (long long i: arr) res+=i;
        return res%mod;
    }
};
