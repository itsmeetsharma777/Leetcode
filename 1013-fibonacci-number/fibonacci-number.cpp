class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int slast=0;
        int last=1;
        int current=0;
        for(int i=2;i<=n;i++){
            current=last+slast;
            slast=last;
            last=current;
            
        }
        return current;
    }
};