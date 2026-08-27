class Solution {
public:
    int getSum(int a, int b) {
        int sum=a;
        int carry=0;
        while(b!=0){
            sum=a^b; // 0110
            carry=(a&b)<<1; // 0010
            a=sum;
            b=carry;
        }
        return sum;
    }
};