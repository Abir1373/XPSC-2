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
    ll x , n , m ; cin >> x >> n >> m ; 
    ll y = x , a = n , b = m , tot = n + m ;  
    while(y>0 && tot)
    {
        if (y==1)
        {
            if (a==0 && b)
            {
                y = 1 ; 
                break ; 
            }
        }
        bool fl = false ;
        if (y%2==0)
        {
            if (b)b-- ; 
            else a-- ; 
        }
        else 
        {
            if (a) a-- ; 
            else 
            {
                b-- ; 
                fl = true ; 
            }
        }
        tot-- ; 
        y/=2 ; 
        if (fl)
        {
            y++ ; 
        }
    }
    ll mn = y ; 
    y = x , a = n , b = m , tot = n+m ;
    while(y>0 && tot)
    { 
        if (y==1)
        {
            if(a)
            {
                y = 0 ; 
                break ;
            }
            else 
            {
                y = 1 ; 
                break ; 
            }
        }
        bool fl = false ;
        if (y%2==0)
        {
            if (a)a-- ; 
            else b-- ; 
        }
        else 
        {
            if (b)
            {
                b-- ; 
                fl = true ; 
            }
            else 
            {
                a-- ; 
            }
        }
        tot-- ; 
        y/=2 ; 
        if (fl)
        {
            y++ ; 
        }
 
    }
    ll mx = y ; 
    cout << mn << ' ' << mx << '\n' ; 
}

signed main()
{
   Optimize;
   tc()
    solve();
}