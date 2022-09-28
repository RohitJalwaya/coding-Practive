class Solution {
    private:
    int countSetBits(int n,vector<int> &ans){
        int count=0;
        while(n>0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int r=countSetBits(i,ans);
            ans.push_back(r);
        }
        return ans;
    }
};