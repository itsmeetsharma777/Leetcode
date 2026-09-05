class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101]={0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<101;i++){
            sum=sum+(freq[i]*(freq[i]-1)/2);
        }
        return sum;
    }
};