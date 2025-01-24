class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prev=0;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                prev=max(curr,prev);
                curr=0;
                continue;
            }
            curr++;
        }
        prev=max(curr,prev);
        return prev;
    }
};