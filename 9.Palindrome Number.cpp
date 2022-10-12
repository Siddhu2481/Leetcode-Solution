 long long int rev=0, dig,n;
        n=x;
        if(x<0)
            return false;
        do
        {
            dig=x%10;
            rev=(rev*10)+dig;
            x=x/10;
        }while(x!=0);
       if(n==rev)
        return true;
        else
            return false;
