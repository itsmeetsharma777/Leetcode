class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10]={0};
        while(n>0){
            int digit=n%10;
            freq[digit]++;
            n=n/10;
        }
        int sum=0;
        for(int digit=0;digit<10;digit++){
            sum=sum+freq[digit]*digit;
        }
        return sum;
    }
};