class Solution {
public:
    int reverse(int x) {
        long long reverse=0;
        int minvalue=-2147483648;
        int maxvalue=2147483647;
        int orignal=x;
        while(x>0||x<0){
            int remainder=x%10;
            reverse=(reverse*10)+remainder;
            x=x/10;
            if (reverse > maxvalue || reverse < minvalue){
                return 0;
            }

        }
        return reverse;
    }
};