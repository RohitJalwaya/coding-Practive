class Solution {
    private:
    bool isPalindrome(string s){
        int start=0;
        int end=s.length()-1;
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
                
            }
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        string str="";
        for(int i=0;i<words.size();i++){
            if(isPalindrome(words[i])){
                str=words[i];
                break;
            }
            
        }
        return str;
    }
};