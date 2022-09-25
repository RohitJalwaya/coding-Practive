class Solution {
public:
    int maxDepth(string s) {
        // stack<string> st;
        int i=0;
        int ans=0;
        int k=0;
        while(i<s.length()){
            if(s[i]=='('){
                k++;
            }
            else if(s[i]==')'){
                k--;
            }
            ans=max(ans,k);
            i++;
        }
        return ans;
        
    }
};