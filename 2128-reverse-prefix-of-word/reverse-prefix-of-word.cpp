class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        int i=0;
        while(i<word.size()){
            st.push(word[i]);
            if(word[i]==ch){
                i++;
                break;
            }
            i++;
        }
        if(st.empty()|| st.top()!=ch){
            return word;
        }
        string ans="";
        while(st.size()!=0){
            ans=ans+st.top();
            st.pop();
        }
        while(i<word.size()){
            ans=ans+word[i];
            i++;
        }
        return ans;
    }
};