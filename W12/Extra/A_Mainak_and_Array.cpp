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
    ll mx = 0 , mn = 1e18 , n , mx1 = 0 , mn1 = 1e18 ; 
    cin >> n ; 
    vll v(n) ; 
    for (ll i=0;i<n;i++)
    {
        cin >> v[i] ; 
        mx = max(v[i],mx) ; 
        mn = min(v[i],mn) ; 
    }
    mx1 = max(v[0],v[n-1]) ; 
    mn1 = min(v[0],v[n-1]) ; 
    if ((v[0]==mx || v[0]==mn) || (v[n-1]==mn || v[n-1]==mx))
    {
        cout << mx-mn << '\n' ; 
    }
    else 
    {
        ll ans1 , ans2 ;
        ans1 = mx - mn1 ; 
        ans2 = mx1 - mn ; 
        cout << max(ans1,ans2) << '\n' ;
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}