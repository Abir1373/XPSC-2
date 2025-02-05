// Bismillahir Rahmanir Raheem

// author : VaLEnT_DouLoS ( Abir ) 

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

template <typename T> using o_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using o_set2 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n ; cin >> n ; 
    vll v(n) ;
    o_set1<ll>os1 ;
    o_set2<ll>os2 ; 
    for (ll i=0;i<n;i++)
    {
        cin >> v[i] ; 
        os1.insert(v[i]) ; 
    }
    ll ans = 0 ; 
    for (ll i=0;i<n;i++)
    {
        ll val = os2.order_of_key(v[i]) ; 

        ll ind = os1.order_of_key(v[i]) ; 
        auto it = os1.find_by_order(ind) ; 
        os1.erase(it) ; 

        ll val2 = os1.order_of_key(v[i]) ; 
        ans += (val*val2) ; 
        os2.insert(v[i]) ; 
    }
    cout << ans << '\n' ;
}

signed main()
{
   Optimize;
//    tc()
    solve();
}