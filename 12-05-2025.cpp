class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> st;
        vector<int> ans;
        int n = digits.size();
        for (int i=0; i<n; i++) {
            if (digits[i]==0) continue;
            for (int j=0; j<n; j++)  {
                if (i==j) continue;
                int val = digits[i]*100+digits[j]*10;
                for (int k=0; k<n; k++) {
                    if (k==i || k==j) continue;
                    int temp = val+digits[k];
                    if (temp%2==0) {
                        st.insert(temp);
                    }
                }
            }
        }
        for (int i: st) ans.push_back(i);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
