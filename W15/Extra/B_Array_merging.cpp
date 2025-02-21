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
    vll c1(n*2+1,0) , c2(n*2+1,0) ; 
    for (ll i=0;i<n;i++)
    {
        cin >> a[i] ; 
        c1[a[i]]=1 ; 
    }
    for (ll i=0;i<n;i++)
    {
        cin >> b[i] ;
        c2[b[i]] = 1 ; 
    }
    ll c = 1 ;  
    for (ll i=0;i<n-1;i++)
    {
        if (a[i]==a[i+1])
        {
            c++ ; 
        }    
        else 
        {
            if (c)
            {
                c1[a[i]] = max(c,c1[a[i]]) ; 
                c = 1 ; 
            }
        }
    }
    if (c)
    {
        c1[a[n-1]] = max(c,c1[a[n-1]]) ; 
        c = 1 ;
    }
    for (ll i=0;i<n-1;i++)
    {
        if (b[i]==b[i+1])
        {
            c++ ; 
        }    
        else 
        {
            if (c)
            {
                c2[b[i]] = max(c,c2[b[i]]) ; 
                c = 1 ; 
            }
        }
    }
    if (c)
    {
        c2[b[n-1]] = max(c,c2[b[n-1]]) ; 
        c = 1 ;
    }
    ll mx = 1 ; 
    for (ll i=0;i<=n*2;i++)
    {
        mx = max(c1[i]+c2[i],mx) ; 
    }
    cout << mx << '\n' ;
}

signed main()
{
   Optimize;
   tc()
    solve();
}