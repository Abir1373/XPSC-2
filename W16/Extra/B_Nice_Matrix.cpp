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
    ll n , m ; cin >> n >> m ; 
    ll a[n+1][m+1] ; 
    for (ll i=1;i<=n;i++)
    {
        for (ll j=1;j<=m;j++)
        {
            cin >> a[i][j] ; 
        }
    }
    ll cnt = 0 , ans = 0 ;
    for (ll i=1;i<=n/2;i++)
    {
        ll now = 0 ;
        for (ll j=1;j<=m/2;j++)
        {
            ll p = a[i][j] ; 
            ll q = a[i][m-now] ; 
            ll r = a[n-cnt][j] ; 
            ll s = a[n-cnt][m-now] ; 
            ll avg = (p + q + r + s) / 4 ; 
            ans += abs(p-avg) ; 
            ans += abs(q-avg) ; 
            ans += abs(r-avg) ; 
            ans += abs(s-avg) ; 
            now++ ;
        }
        cnt++ ; 
    }
    if (n&1)
    {
        ll mid = (n>>1) + 1 ; 
        ll avg = 0 ;
        for (ll i=1;i<=m;i++)
        {
            avg += a[mid][i] ; 
        }
        avg /= m ; 
        for (ll i=1;i<=m;i++)
        {
            ans += abs(a[mid][i]-avg) ;  
        }
    }
    if (m&1)
    {
        ll avg = 0 , c = 0 ; 
        ll mid = (m>>1) + 1 ; 
        for (ll i=1;i<=m/2;i++)
        {
            avg += a[i][mid] ; 
            avg += a[i][n-c] ; 
            c++ ; 
        }
        avg /= (n-1) ; 
        for (ll i=1;i<=m/2;i++)
        {
            ans += (a[i][mid]-avg) ;
        }
    }
    cout << ans << '\n' ; 
}

signed main()
{
   Optimize;
   tc()
    solve();
}