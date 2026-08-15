class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprefix=1;
        int maxsuffix=1;
        int maxproduct=INT_MIN;
        for(int i=0;i<=nums.size()-1;i++){
            maxsuffix=maxsuffix*nums[i];
            maxproduct=max(maxsuffix,maxproduct);
            if(maxsuffix==0){
                maxsuffix=1;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            maxprefix=maxprefix*nums[i];
            maxproduct=max(maxprefix,maxproduct);
            if(maxprefix==0){
                maxprefix=1;
            }
        }
        return maxproduct;
    }
};