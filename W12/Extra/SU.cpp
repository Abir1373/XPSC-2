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
    ll n , l , r ; cin >> n >> l >> r ; 
    vll v(n+1) , ans , st , en ; 
    for (ll i=1 ; i<=n ; i++)
    {
        cin >> v[i] ;
        if (i<l)
        {
            st.pb(v[i]) ; 
        }
        else if (i>=l && i<=r)
        {
            ans.pb(v[i]) ; 
        }    
        else if (i>r)
        {
            en.pb(v[i]) ; 
        }
    }
    all (st) ; all (en) ; rall(ans) ; 
    ll one = sz(st) ; 
    ll two = sz(en) ; 
    ll len = sz(ans) ; 
    vll ans2 = ans ; 
    for (ll i=0; i<min(one,len); i++)
    {
        if(ans[i]>st[i]) ans[i] = st[i] ; 
    }
    for (ll i=0; i<min(two,len); i++)
    {
        if(ans2[i]>en[i]) ans2[i] = en[i] ; 
    }
    ll tot = 0 , tot2 = 0 ; 
    for (ll i=0 ; i<len ; i++)
    {
        tot += ans[i] ; 
        tot2 += ans2[i] ; 
    }
    cout << min(tot,tot2) << '\n' ; 
}

signed main()
{
   FastRead;
   tc()
    solve();
}