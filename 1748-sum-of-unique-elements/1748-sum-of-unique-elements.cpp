class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int occur[101]={0};
        for(int i=0;i<nums.size();i++){
            occur[nums[i]]++;
        }
        int sum=0;
        
        for(int i=0;i<101;i++){
            if(occur[i]==1){
                sum=sum+i;
            }
        }
        return sum;
    }
};