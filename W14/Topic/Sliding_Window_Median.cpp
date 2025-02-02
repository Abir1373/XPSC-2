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
#define FastRead ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define inf INT_MAX ;
#define clr(x,y) memset(x,y,sizeof x)
#define pii pair<ll,ll>
#define vll vector<ll>

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n , m ; cin >> n >> m ; 
    vll v(n) ;
    for (ll i=0;i<n;i++)
    {
        cin >> v[i] ; 
    } 

    pbds<pii> pb ; 

    ll l = 0 , r = 0 ;

    while (r<n)
    {
        pb.insert ({v[r],r}) ; 
        if (r-l+1==m)
        {
            ll mid = (m / 2) - (m % 2 == 0) ;
            auto p = pb.find_by_order(mid) ; 
            cout << p->f << ' ' ;
            pb.erase({v[l],l}) ; 
            l++ ;  
        }
        r++ ; 
    }
}

signed main()
{
   FastRead;
//    tc()
    solve();
}