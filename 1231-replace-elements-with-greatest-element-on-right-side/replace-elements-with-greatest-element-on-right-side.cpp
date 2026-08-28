class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size());
        int maxRight = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            ans[i] = maxRight;
            maxRight = max(maxRight, arr[i]);
        }

        return ans;
    }
};