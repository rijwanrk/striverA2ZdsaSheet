class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //*********Method-1************************
        int n=nums.size();
        k=k%n;
        vector<int>temp(k);
        int j=0;
        for(int i=n-k;i<n;i++){
            temp[j++]=nums[i];
        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }  
        //*************Method-2 by reversing******************
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};