 vector<vector<int>> ans;
    
    void helper(int index,vector<int>& nums){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            helper(index+1,nums);
            swap(nums[index],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        helper(0, nums);
        return ans;
    }
