int n=nums.size();
        if(n==1)
            return true;
        int current=0;
        int i=0;
        int reach=nums[0];
        while(i<n)
        {
            if(reach>=n)
                return true;
            if(reach<current)
                return false;
            reach=max(current+nums[i],reach);
            current++;
            i++;
        }
            return reach;
