// Bismillahir Rahmanir Raheem

// author : (عبد) Dewan Abir Mahmud 

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
    vll v(n+1) ;
    for (ll i=1;i<=n;i++)
    {
        cin >> v[i] ; 
    }
    sort(v.begin()+1,v.end()) ;  
    ll l = 1 , r = n , ans = 0 , e = 0 ; 
    while (l<r)
    { 
        if (v[l]+e<v[r])
        {
            ans += v[l] ; 
            e += v[l] ; 
            v[l] = 0 ; 
            l++ ; 
        }
        else if (v[l]+e==v[r])
        {
            ans += (v[l] + 1)  ; 
            e = 0 ;  
            v[l] = 0 ; 
            v[r] = 0 ; 
            l++ ; 
            r-- ; 
        }
        else if (v[l]+e>v[r])
        {
            ll cur = v[l] + e ; 
            ll d = cur - v[r] ;
            v[l] = d ; 
            v[r] = 0 ; 
            ans += (d+1) ; 
            r-- ; 
            e = 0 ; 
        }
    }
    cout << ans << '\n' ;
    for (ll i=1;i<=n;i++)
    {
        cout << v[i] << " \n" [i==n] ;
    }
}

signed main()
{
   Optimize;
   tc()
    solve();
}