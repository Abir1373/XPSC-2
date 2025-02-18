if (cnt[i]>1 && i!=1)
        {
            ll one = 13 - (2*i) ; 
            ll two = 23 - (2*i) ; 
            if (cnt.count(one) || cnt.count(two))
            {
                cout << "YES\n" ; 
                return ;
            }
        } 