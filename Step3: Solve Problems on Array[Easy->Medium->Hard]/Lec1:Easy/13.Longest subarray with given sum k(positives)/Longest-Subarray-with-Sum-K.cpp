#include<iostream>
#include<vector>
#include<map>
using namespace std;
int longestSubarray(vector<int>&arr,int k){
    // int n=arr.size();
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     int sum=0; int length=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+arr[j];
    //         length++;
    //     }
    //     if(sum==k){
    //         ans=max(ans,length);
    //     }
    // }
    // return ans;
    int n=arr.size();
    int maxLen=0;
    map<long long,int>presummap;
    int presum=0;
    for(int i=0;i<n;i++){
        presum=presum+arr[i];
        if(presum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=presum-k;
        if(presummap.find(rem)!=presummap.end()){
            int len=i-presummap[rem];
            maxLen=max(maxLen,len);
        }
        presummap[presum]=i;
    }
    return maxLen;
}

int main(){
    vector<int> arr={10, 5, 2, 7, 1, -10};
    int k;
    cin>>k;
    int ans = longestSubarray(arr,k);
    cout<<ans<<endl;
}