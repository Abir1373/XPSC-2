// Bismillahir Rahmanir Raheem

// author : VaLEnT_DouLoS ( Abir ) 

#include <bits/stdc++.h>

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
#define FastRead ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define inf INT_MAX ;
#define clr(x,y) memset(x,y,sizeof x)
#define pii pair<ll,ll>
#define vll vector<ll>

void solve()
{
    ll n ; cin >> n ; 
    // if(n==1)
    // {
    //     cout << "0\n" ; 
    //     return ;
    // }
    // ll lo = 1 , hi = 1e9  , m , ans ; 
    // while(lo<=hi)
    // {
    //     m = (lo + hi) >> 1 ; 
    //     ll div = (m * 2) + 2 ; 
    //     ll cmp = (div * m) ; 
    //     if(cmp>=n)
    //     {
    //         ans = m ; 
    //         hi = m - 1 ; 
    //     }
    //     else 
    //     {
    //         lo = m + 1 ; 
    //     }
    // }
    // cout << ans << '\n' ;
    cout << n * 2 + 2 ; 
}

signed main()
{
   FastRead;
   tc()
    solve();
}