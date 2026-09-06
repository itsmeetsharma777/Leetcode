class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        int freq[101]={0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<101;i++){
            if(freq[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};