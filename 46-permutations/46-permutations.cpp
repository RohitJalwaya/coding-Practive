class Solution {
    private:
   void permute(int index,int n,vector<vector<int>> &ans,vector<int> &nums){
        
        if(index==n){
            ans.push_back(nums);
            return ;
        }
        
        for(int i=index;i<n;i++){
            swap(nums[index],nums[i]);
            permute(index+1,n,ans,nums);
            swap(nums[index],nums[i]);
        }
       
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        int n=nums.size();
        permute(index,n,ans,nums);
        return ans;
    }
};