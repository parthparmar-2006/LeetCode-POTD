class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26, 0);
        for (char c : word) freq[c - 'a']++;
        vector<int> f;
        for (int x : freq) if (x) f.push_back(x);
        sort(f.begin(), f.end());

        int res = INT_MAX, n = f.size();
        for (int i = 0; i < n; ++i) {
            int target = f[i];
            int del = 0;
            for (int j = 0; j < n; ++j) {
                if (f[j] < target) del += f[j];
                else if (f[j] > target + k) del += f[j] - (target + k);
            }
            res = min(res, del);
        }
        return res;
    }

};
