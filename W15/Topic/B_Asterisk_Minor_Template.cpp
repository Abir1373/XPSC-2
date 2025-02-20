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
    string a , b ; cin >> a >> b ; 
    ll n = sz(a) ;
    ll m = sz(b) ; 
    ll ind1 = -1 , ind2 = -1 , fl = 0 ;  
    for (ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if (a[i]==b[j] && a[i+1]==b[j+1] && i+1<n && j+1<m)
            {
                ind1 = i ; 
                ind2 = i+1 ; 
                fl = 1 ;
                break ; 
            }
        }
        if (fl)break ;
    }
    if(ind1>=0 && ind2>=0)
    {
        cout << "YES\n" ;
        cout << "*" << a[ind1] << a[ind2] << "*\n" ; 
    }
    else 
    {
        if (a[0]==b[0])
        {
            cout << "YES\n" ; 
            cout << a[0] << "*\n" ; 
        }
        else if (a[n-1]==b[m-1])
        {
            cout << "YES\n" ; 
            cout << "*" << a[n-1] << "\n";
        }
        else cout << "NO\n" ;
    }

}

signed main()
{
   Optimize;
   tc()
    solve();
}