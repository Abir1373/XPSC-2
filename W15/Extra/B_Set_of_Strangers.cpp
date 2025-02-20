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

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<pii>d = {{0,1},{0,-1},{1,0},{-1,0}} ; 

bool valid (ll i,ll j,ll n ,ll m)
{
    if (i<0 || i>=n || j<0 || j>=m)
    {
        return false ;
    }
    return true ;
}
void solve()
{
    ll n , m ; cin >> n >> m ; 
    ll grid[n][m] ; 
    for (ll i=0;i<n;i++)
    {
        for (ll j=0;j<m;j++)
        {
            cin >> grid[i][j] ; 
        }
    }
    map<ll,ll>mp ;
    for (ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            for(ll k=0;k<4;k++)
            {
                ll ci = i+d[k].f ;
                ll cj = j+d[k].s ; 
                if (valid(ci,cj,n,m)==true)
                {
                    if (mp[grid[i][j]]==2ll)
                    {
                        continue ;
                    }
                    if (grid[i][j] == grid[ci][cj])
                    {
                        mp[grid[i][j]] = 2ll ;
                    }
                    else 
                    {
                        mp[grid[i][j]] = 1ll ;
                    }
                }
            }
        }
    }
    ll ans = 0 , mx = 0 ; 
    for (auto i : mp)
    {
        ans += i.s ; 
        mx = max(i.s,mx) ; 
    }
    cout << ans - mx << '\n' ;
}

signed main()
{
   Optimize;
   tc()
    solve();
}