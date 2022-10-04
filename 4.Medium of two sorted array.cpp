vector<int> s;
        int  n=nums1.size();
           for(int i=0;i<n;i++)
           {
               s.push_back(nums1[i]);
           }
        int m=nums2.size();
        for(int j=0;j<m;j++)
        {
            s.push_back(nums2[j]);
        }
        sort(s.begin(),s.end());
        int a=s.size();
        if( a%2==0 ){
        return (double) (s[a/2] + s[a/2-1])/2;
    }else{
        return (double) s[a/2];
    }
