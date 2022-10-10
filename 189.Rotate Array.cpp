int n=nums.size();
        vector<int> temp=nums;
        for(int i=0;i<n;i++)
        {
            nums[(i+k)%n]=temp[i];
        }
