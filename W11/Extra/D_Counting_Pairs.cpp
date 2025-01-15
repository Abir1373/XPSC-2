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
    ll n , x , y ; cin >> n >> x >> y ; 
    vll v(n) ; 
    ll sum = 0 ; 
    for(ll i=0;i<n;i++)
    {
        cin >> v.[i] ;
        sum += v[i] ; 
    }
    all(v) ; 
    ll ans = 0 ; 
    for(ll i=0;i<n-1;i++)
    {
        ll tmp = sum - v[i] ;
        ll lo = lower_bound(v.begin()+i+1, v.end(), tmp - y) - v.begin() ; 
        ll hi = upper_bound(v.begin()+i+1, v.end(), tmp - x) - v.begin() ; 
        ll d = (hi-lo) ; 
        ans += d ; 
    }
    cout << ans << '\n' ;
}

signed main()
{
   FastRead;
   tc()
    solve();
}