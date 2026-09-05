class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        int freq[26]={0};
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        int maxvowel=0;
        int maxconsonant=0;
        for(int i=0;i<26;i++){
            char ch ='a'+i;
            if(isvowel(ch)){
                maxvowel=max(maxvowel,freq[i]);
            }
            else{
                maxconsonant=max(maxconsonant,freq[i]);
            }
        }
        return (maxvowel+maxconsonant);
            
    }
};