while(now>0)
    {
        now -= odd ; 
        odd >>= 1 ;
        if(now>0)cur += 1 ; 
    }