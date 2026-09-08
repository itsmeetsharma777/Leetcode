class Solution {
public:
    int maxDifference(string s) {
        int minevenfrequency=INT_MAX;
        int maxoddfrequency=0;
        int freq[26]={0};
            for(int i=0;i<s.length();i++){
                freq[s[i]-'a']++;
            }
            for(int i=0;i<26;i++){
                if (freq[i] == 0) {
                continue;
            }
                if(freq[i]%2==0){
                    minevenfrequency=min(minevenfrequency,freq[i]);
                }
                else{
                    maxoddfrequency=max(maxoddfrequency,freq[i]);
                }
            }
        
        return maxoddfrequency-minevenfrequency;
    }
};