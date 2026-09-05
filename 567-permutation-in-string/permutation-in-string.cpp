class Solution {
public:
    bool isFrequencySame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }
        int freq1[26] = {0};
        int freq2[26] = {0};
        for (char ch : s1) {
            freq1[ch - 'a']++;
        }
        int windowSize = s1.length();
        for (int i = 0; i < windowSize; i++) {
            freq2[s2[i] - 'a']++;
        }
        if (isFrequencySame(freq1, freq2)) {
            return true;
        }
        for (int i = windowSize; i < s2.length(); i++) {
            freq2[s2[i] - 'a']++;
            freq2[s2[i - windowSize] - 'a']--;
            if (isFrequencySame(freq1, freq2)) {
                return true;
            }
        }
        return false;
    }
};