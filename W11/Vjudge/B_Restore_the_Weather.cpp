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
    ll n , m ; cin >> n >> m ; 
    vll a(n) , b(n) ; 
    vector<pii>v ; 
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        v.pb({a[i],i}) ;  
    }
    map<ll,ll>mp ; 
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> b[i] ;
        mp[b[i]]++ ;
    } 
    all(v) ; 
    vll ans(n) ; 
    for(ll i = 0 ; i < n ; i++)
    {
        ll val = v[i].f - m ; 
        auto it = mp.lower_bound(val) ; 
        ll cur = it -> first ;
        mp[cur]-- ; 
        if(mp[cur] == 0)
        {
            mp.erase(it) ; 
        }
        ans[v[i].s] = cur ; 
    }
    for(ll i = 0 ; i < n ; i++)
    {
        cout << ans[i] << " \n"[i==n-1] ;
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}