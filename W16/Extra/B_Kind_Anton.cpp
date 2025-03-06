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
    ll n ; cin >> n ; 
    vll a(n) , b(n) ; 
    for (ll i=0;i<n;i++)
    {
        cin >> a[i] ; 
    } 
    for (ll i=0;i<n;i++)
    {
        cin >> b[i] ; 
    } 
    bool pos = false , neg = false ; 
    for (ll i=0;i<n;i++)
    {
        if (b[i]>a[i] && pos==false)
        {
            cout << "NO\n" ; 
            return ;
        }
        else if (b[i]<a[i] && neg==false)
        {
            cout << "NO\n" ; 
            return ; 
        }
        if (a[i]>0) pos = true ; 
        if (a[i]<0) neg = true ; 
    }
    cout << "YES\n" ; 
}

signed main()
{
   Optimize;
   tc()
    solve();
}