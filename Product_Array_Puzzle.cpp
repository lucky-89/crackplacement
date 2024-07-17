vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        long long pro=1;
        vector<long long>ans;
        int zero=0;
        for(auto it:nums){
            if(it==0){
                zero++;
            }
        }
        if(zero>1){
            for(int i=0;i<n;i++){
                ans.push_back(0);
                
             }
             return ans;
        }
        else if(zero==1){
            for(auto it:nums){
                if(it!=0){
                    pro*=it;
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(pro);
                }
                
            }
            
        }
        else{
            for(auto it:nums){
                
                pro*=it;
                
            }
            for(int i=0;i<n;i++){
                ans.push_back(pro/nums[i]);
            }
        }
        
        return ans;
    }
