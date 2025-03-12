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

const ll N = 3e5 + 5 ; 

vll g[N] , operations(N) ; 
string s ; 

void dfs(ll u)
{
    if (g[u][0])
    {
        ll v = g[u][0] ; 
        if (s[u-1]!='L')
        {
            operations[v] = operations[u] + 1ll ; 
        }
        else 
        {
            operations[v] = operations[u] ; 
        }
        dfs(v) ; 
    }
    if (g[u][1])
    {
        ll v = g[u][1] ; 
        if (s[u-1]!='R')
        {
            operations[v] = operations[u] + 1ll ; 
        }
        else 
        {
            operations[v] = operations[u] ; 
        }
        dfs(v) ; 
    }
}

void solve()
{
    ll n ; cin >> n ; 
    for (ll i=0;i<=n;i++)
    {
        g[i].clear() ; 
        operations[i] = 0 ; 
    }
    cin >> s ; 
    for (ll i=1;i<=n;i++)
    {
        ll l , r ; cin >> l >> r ; 
        g[i].pb(l) ;
        g[i].pb(r) ;
    }
    dfs(1) ; 
    ll ans = 1e18 ; 
    for (ll i=1;i<=n;i++)
    {
        if (g[i][0]==0 && g[i][1]==0)
        {
            ans = min(ans,operations[i]) ; 
        }
    }
    cout << ans << "\n" ; 
}

signed main()
{
   Optimize;
   tc()
    solve();
}