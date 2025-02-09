// Bismillahir Rahmanir Raheem

// author : (عبد) Dewan Abir Mahmud 

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

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n ; cin >> n ; 
    vll v[51] ; 
    o_set<ll>st ;  
    for (ll i=0;i<n;i++)
    {
        ll x ; cin >> x ; 
        for (ll j = 0, inp ; j < x ; j++)
        {
            cin >> inp ; 
            v[i].pb(inp) ; 
            st.insert(inp) ; 
        }
    }
    ll d = sz(st) ; 
    ll now = (1<<n) ;
    ll mx = 0 ; 
    for (ll i=1;i<now-1;i++)
    {
        o_set<ll>cur ; 
        for (ll j=30;j>=0;j--)
        {
            if ((i>>j)&1)
            {
                for (auto x : v[j])
                {
                    cur.insert(x) ; 
                }
            }
        }
        ll len = sz(cur) ; 
        if (len<d)
        {
            mx = max(len,mx) ; 
        }

    }
    cout << mx << '\n' ;
}

signed main()
{
   Optimize;
   tc()
    solve();
}