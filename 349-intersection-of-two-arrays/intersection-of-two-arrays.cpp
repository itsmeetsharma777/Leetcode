class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i <= nums1.size() - 1; i++) {
            for (int j = 0; j <= nums2.size() - 1; j++) {
                if (nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                }
            }
        }
        sort(ans.begin(), ans.end());
        if (ans.empty())
            return ans;

        int k = 1;
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] != ans[i - 1]) {
                ans[k] = ans[i];
                k++;
            }
        }
        ans.resize(k);
        return ans;
    }
};