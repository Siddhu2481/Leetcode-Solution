vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
                return 1;
            else if(nums[l]+nums[r]<l)
                l++;
            else
                r++
        }
        return 0;
    }
