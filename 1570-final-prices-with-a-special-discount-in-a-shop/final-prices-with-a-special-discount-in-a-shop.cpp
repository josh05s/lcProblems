class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int s = prices.size();

        for (int i = 0; i < s - 1; i++) {
            for (int j = i + 1; j < s; j++) {
                if (prices[j] <= prices[i]) {
                    prices[i] -= prices[j];
                    break;
                }
            }
        }

        return prices;
    }
};