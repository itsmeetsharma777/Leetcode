class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int num = i;
            bool self = true;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 0 || i % digit != 0) {
                    self = false;
                    break;
                }
                num /= 10;
            }
            if (self)
                ans.push_back(i);
        }
        return ans;
    }
};