// Bismillahir Rahmanir Raheem

// author : VaLEnT_DouLoS ( Abir ) 

#include <bits/stdc++.h>

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

void solve()
{
    ll n , m ; cin >> n >> m ; 
    if (n>m || (n%2==0 && m&1))
    {
        cout << "No\n" ; 
        return ; 
    }
    else if (n<=m)
    {
        if (n&1)
        {
            cout << "Yes\n" ;
            for (ll i = 1 ; i<n ; i++)
            {
                cout << 1 << ' ' ;
            }
            cout << m - (n-1) << '\n' ; 
        }
        else 
        {
            vll ans ; 
            for (ll i=1 ; i<=n-2; i++)
            {
                ans.pb(1) ; 
            }
            m -= (n-2) ; 
            ans.pb(m/2) ; ans.pb(m/2) ; 
            cout << "Yes\n" ; 
            for (auto i: ans)
            {
                cout << i << ' ' ; 
            }
            cout << '\n' ; 
        }
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}