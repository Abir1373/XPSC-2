// Bismillahir Rahmanir Raheem

// author : VaLEnT_DouLoS ( Abir ) 

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std ;

#define f first
#define s second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ll long long int
#define ld long double
#define nl '\n'
#define B begin
#define rb rbegin
#define E end
#define re rend
#define bs binary_search
#define ub upper_bound
#define lb lower_bound
#define tc() long long int test_case ; cin >> test_case ; while(test_case--)
#define cout(a) cout << a << endl
#define all(v) sort(v.begin(),v.end())
#define rall(v) sort(v.rbegin(),v.rend())
#define rev(v) reverse(v.begin(),v.end())
#define sz(s) s.size() ;
#define Optimize ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define inf INT_MAX ;
#define clr(x,y) memset(x,y,sizeof x)
#define pii pair<ll,ll>
#define vll vector<ll>
#define vpi vector<pii>

template <typename T> using o_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n ; cin >> n ; 
    if (n%2==0)
    {
        vll cnt[31] ; 
        for (ll i=1;i<n;i++)
        {
            for (ll j=30;j>=0;j--)
            {
                if ((i>>j)&1)
                {
                    if ((n>>j)&1)
                    {
                        continue ;
                    }
                    else cnt[j].pb(i) ;
                }
            }
        }
        ll one , two ; 
        for (ll i=30;i>=0;i--)
        {
            ll len = sz(cnt[i]) ;  
            if (len>1)
            {
                one = cnt[i][len-1] ; 
                two = cnt[i][len-2] ; 
                break ; 
            }
        }
        ll tot = 0 ; 
        for (ll j=30;j>=0;j--)
        {
            if ((n>>j)&1)
            {
                tot += (1<<j) ; 
            }
            else if ((one>>j)&1)
            {
                tot += (1<<j) ; 
            }
            else if ((two>>j)&1) 
            {
                tot += (1<<j) ; 
            }
        }
        cout << tot << '\n' ;
        set<ll>st  = {1,3,n} ; 
        st.insert(one) ; 
        st.insert(two) ; 
        ll c=1 ; 
        for (ll i=1;i<=n;i++)
        {
           if (st.count(c))
           {
                c++ ; 
           }
           else 
           {
                cout << c << ' ' ; 
                c++ ;
           }
        }
        for (auto i: st)
        {
            cout << i << ' ' ;
        }
        cout << '\n' ;
    }
    else 
    {
        cout << n << '\n' ; 
        vll v(n+1) ; 
        for (ll i=1;i<=n;i++)
        {
            v[i] = i ; 
        }
        swap(v[1],v[2]) ;
        for (ll i=1;i<=n;i++)
        {
            cout << v[i] << " \n" [i==n] ;
        }
    }

}

signed main()
{
   Optimize;
   tc()
    solve();
}