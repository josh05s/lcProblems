class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> res(spells.size());

        for (int i = 0; i < spells.size(); i++) {
            long long spell = spells[i];
            // smallest potion value p such that spell * p >= success
            long long minPotion = (success + spell - 1) / spell; // ceil division

            int lo = 0, hi = m; // hi = m means "none found"
            while (lo < hi) {
                int mid = lo + (hi - lo) / 2;
                if (potions[mid] >= minPotion) {
                    hi = mid;
                } else {
                    lo = mid + 1;
                }
            }
            res[i] = m - lo; // everything from index lo onward is successful
        }
        return res;
    }
};