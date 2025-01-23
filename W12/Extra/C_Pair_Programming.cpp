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
    ll n , p , q ; cin >> n >> p >> q ; 
    vll v(n) , a(p) , b(q) ; 
    for (ll i=0 ; i<p ; i++)
    {
        cin >> a[i] ; 
    }
    for (ll i=0 ; i<q ; i++)
    {
        cin >> b[i] ; 
    }
    vll ans ; 
    ll id = 0 , id2 = 0 ; 
    while (id!=p || id2!=q)
    {
        if (id!=p && a[id]==0)
        {
            ans.pb(0) ; 
            id++ ; 
            n++ ; 
        }
        else if(id2!=q && b[id2]==0)
        {
            ans.pb(0) ; 
            id2++ ; 
            n++ ; 
        }
        else if(id!=p && a[id] && a[id]<=n)
        {
            ans.pb(a[id]) ; id++ ; 
        }
        else if(id2!=q && b[id2] && b[id2]<=n)
        {
            ans.pb(b[id2]) ; id2++ ; 
        }
        else 
        {
            cout << "-1\n" ; 
            return ; 
        }
    }
    ll len = sz(ans) ; 
    for (ll i=0;i<len;i++)
    {
        cout << ans[i] << " \n"[i==len-1] ;
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}