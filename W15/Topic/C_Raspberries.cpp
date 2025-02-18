// Bismillahir Rahmanir Raheem

// author : Dewan Abir Mahmud 

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
    ll n , k ; cin >> n >> k ; 
    ll mn = 1e18 ; 
    vll v(n) ; 
    for (ll i=0;i<n;i++)
    {
        cin >> v[i] ;
    }
    ll evn = 0 ; 
    for (ll i=0;i<n;i++)
    {
        if (v[i]%k==0)
        {
            cout << "0\n" ; 
            return ;
        } 
        evn += (v[i]%2==0) ;
        ll div = v[i]/k + 1 ;
        ll now = k*div - v[i] ; 
        mn = min(now,mn) ; 
    }
    if (k==4)
    {
        if (evn==0)
        {
            mn = min(mn,2ll) ; 
        }
        else if (evn==1)
        {
            mn = min(mn,1ll) ; 
        }
        else if (evn>=2)
        {
            mn = min(mn,0ll) ;
        }
    }
    cout << mn << '\n' ;
}

signed main()
{
   Optimize;
   tc()
    solve();
}