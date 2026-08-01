class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastSeen[128]; // int lastSeen[128] = {-1} only sets index 1 to -1, rest are 0. int lastSeen[128] = -1; gives a compiler error
        for (int i = 0; i < 128; i++) // OR memset(lastSeen, -1, sizeof(lastSeen)); 
        { 
            lastSeen[i] = -1;
        }

        int left = 0, maxLen = 0;
        for (int right = 0; right < s.size(); right++) 
        {
        char c = s[right];
            if (lastSeen[c] >= left) 
            {
                left = lastSeen[c] + 1;
            }
            lastSeen[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};