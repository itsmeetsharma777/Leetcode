class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());
        double sum = 0.0;
        int n = min(prices.size(), discounts.size());
        for (int i = 0; i <=n-1; i++) {
            sum += prices[i] * (100.0 - discounts[i]) / 100.0;
        }
        for (int i = n; i <= prices.size()-1; i++) {
            sum += prices[i];
        }
        return sum;
    }
};