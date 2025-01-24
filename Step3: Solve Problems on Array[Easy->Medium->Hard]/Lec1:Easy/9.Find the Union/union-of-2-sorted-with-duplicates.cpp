vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int i=0;
        int j=0;
        int size1=a.size();
        int size2=b.size();
        vector<int>ans;
        while(i<size1 && j<size2){
            if(a[i]<b[j]){
                if(ans.size()==0 || ans.back()!=a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }else{
                if(ans.size()==0 || ans.back()!=b[j]){
                    ans.push_back(b[i]);
                }
                j++;
            }
        }
        while(i<size1){
            if(ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<size2){
            if(ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        return ans;
        
    }