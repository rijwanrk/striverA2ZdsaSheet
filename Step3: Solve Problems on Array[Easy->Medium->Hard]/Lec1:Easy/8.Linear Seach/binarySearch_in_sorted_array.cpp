class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int n=nums.size();
     int j=0;
     for(int i=0;i<n;i++){
        if(nums[i]!=0){
            j=i;
            break;
        }
     }  
     int i=0;
     while(i<n && j<n){
        if(nums[j]==0){
            j++;
        }else{
           swap(nums[i],nums[j]);
           i++;
           j++;
        }
     } 
    }
};