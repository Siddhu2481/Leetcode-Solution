int rem=0;
        while(x!=0)
        {
          
           
         if(rem>(INT_MAX/10) || rem<(INT_MIN/10) )
                return 0;
        rem=(rem*10)+x%10;
        x=x/10;
        }
        return rem;
