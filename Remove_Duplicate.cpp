int removeDuplicates(vector<int>& nums) {
        
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);

        }
        
        //int ans=s.size();
        //vector<int>v;
        nums.clear();
        for(auto i:s){
            nums.push_back(i);
        }
        return nums.size();
    }
