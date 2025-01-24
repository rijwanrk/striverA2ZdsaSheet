class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum2=0;
        for(int i=1;i<=nums.size();i++){
            sum2=sum2+i;
        }
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum1=sum1+nums[i];
        }
        int ans=sum2-sum1;
        return ans;
    }
};