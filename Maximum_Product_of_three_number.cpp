int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int ans=1;
        if(nums.size()==3){
            for(int i=0;i<3;i++){
                ans*=nums[i];
            }
        }
        else{
            int ans1=1;
            ans1*=(nums[0]*nums[1]*nums[nums.size()-1]);
            int n=nums.size()-1;
            ans*=(nums[n]*nums[n-1]*nums[n-2]);

            ans=max(ans,ans1);
        }
        return ans;
    }
