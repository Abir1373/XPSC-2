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
    ll n , a , b ; cin >> n >> a >> b ; 
    vll v(n+1) ; 
    for (ll i=1;i<=n;i++)
    {
        v[i] = i%2 ; 
    }
    ll one = a % n , two = b % n ; 
    ll d = abs(one-two) ; 
    if (d>1)
    {
        v[a] = 2 ; 
    }
    
    for (ll i=1;i<=n;i++)
    {
        ll nxt = i+1 , prv = i-1 ;
        if (nxt>n)
        {
            nxt = 1 ; 
        }
        if (prv<1)
        {
            prv = n ; 
        }
        ll c0 = 0 , c1 = 0 ; 
        c0 += (v[nxt]==0) ; 
        c0 += (v[prv]==0) ;
        c1 += (v[nxt]==1) ; 
        c1 += (v[prv]==1) ; 
        if (i==a)
        {
            c0 += (v[b]==0) ;  
            c1 += (v[b]==1) ;
        }
        if (i==b)
        {
            c0 += (v[a]==0) ;  
            c1 += (v[a]==1) ;
        }
        if (c1 && c0)
        {
            v[i] = 2 ; 
        }
        if (c0==0)
        {
            v[i] = 0 ;
        }
        else if (c1==0)
        {
            v[i] = 1 ; 
        }
    }
    for (ll i=1;i<=n;i++)
    {
        cout << v[i] << " \n"[i==n] ; 
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}