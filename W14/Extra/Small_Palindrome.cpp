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

template <typename T> using o_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll a , b ; cin >> a >> b ; 
    string ans = "" , ans2 = "" , mid = "";
    ll len1 = a/2 ;
    ll len2 = b/2 ;   
    while (len1--)
    {
        ans += "1" ;
        ans2 += "1" ;
    }
    while (len2--)
    {
        ans = ans + "2" ; 
        ans2 = "2" + ans2 ; 
    }
    if (a&1)
    {
        mid += "1" ; 
    }
    else if (b&1)
    {
        mid += "2" ; 
    }
    cout << ans << mid << ans2 << "\n" ;
}

signed main()
{
   Optimize;
   tc()
    solve();
}