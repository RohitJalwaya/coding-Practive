class Solution {
public:
    set<vector<int>> s;
    void permute(int index,int n,vector<int>& nums){
        if(index==n){
            s.insert(nums);
            return;
        }
        for(int i=index;i<n;i++){
            swap(nums[index],nums[i]);
            permute(index+1,n,nums);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int index=0;
        int n=nums.size();
        vector<vector<int>> ans;
        permute(index,n,nums);
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};