map<char,int> v={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int total=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(v[s[i+1]]<=v[s[i]])
            {
                total+=v[s[i]];
            }
            else
            {
                total-=v[s[i]];
            }
        }
        return total;
