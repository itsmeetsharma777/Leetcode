class Solution {
public:
bool isvowel(char ch){
            if(tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' 
            || tolower(ch) == 'u'){
                return true;
            }
            return false;
        }
    string reverseVowels(string s) {
        
        int start=0,end=s.length()-1;
        while(start<end){
            if(!isvowel(s[start])){
                start++;
                continue;
            }
            if(!isvowel(s[end])){
                end--;
                continue;
            }
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};