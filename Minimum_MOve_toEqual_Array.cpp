int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int med=nums[nums.size()/2];
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(med-nums[i]);
        }
        return ans;
    }
