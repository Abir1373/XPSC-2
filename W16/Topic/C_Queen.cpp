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

const ll N = 1e5 + 5 ;
vll vec[N] ; 
void solve()
{
    ll n ; cin >> n ; 
    vll hv(N,0) , ans ;
    for (ll i=1;i<=n;i++)
    {
        vec[i].clear() ; 
    } 
    ll root ;
    map<ll,ll>mp ; 
    for (ll i=1;i<=n;i++)
    {
        ll u , v ; cin >> u >> v ; 
        if (v==1)
        {
            hv[u]++ ; 
            mp[i] = 1 ; 
        } 
        if (u!=-1)
        {
            vec[u].pb(i) ; 
        }
        else root = i ;  
    }
    for (ll i=1;i<=n;i++)
    {
        if (root==i) continue ; 
        if (hv[i]==vec[i].size() && mp[i]) ans.pb(i) ;  
    }
    ll len = sz(ans) ; 
    if (len==0)
    {
        cout << "-1\n" ; 
        return ;
    }
    for (ll i=0;i<len;i++)
    {
        
        cout << ans[i] << " \n"[i==len-1] ; 
    }
}

signed main()
{
   Optimize;
//    tc()
    solve();
}