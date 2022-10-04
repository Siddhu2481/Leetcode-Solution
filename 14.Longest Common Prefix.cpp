int min=100000;
        int n=strs.size();
        if(n==0)
            return "";
        // string at the zero index
        if(n==1)
            return strs[0];
        for(int i=0;i<n;i++)
        {
            // computing size of each string individually
            int size=strs[i].size();
            if(size<min)
                min=size;
            
        }
        string res="";
        for(int i=0;i<min;i++)
        {
            // initial a character that will store each element of a string
            char c=strs[0][i];
            //loop for the other string
            for(int j=1;j<n;j++)
            {
               if(c!=strs[j][i])
                   return res;
            }
            res+=c;
        }
        return res;
    }
