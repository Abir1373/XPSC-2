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
    ll n ; cin >> n ; 
    ll evn = 0 , odd = 0 ; 
    vll v(n) ; 
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> v[i] ; 
        odd+=(v[i]&1) ; 
        evn+=(v[i]%2==0) ; 
    }
    if(evn && odd)
    {
        cout << "2\n" ; 
        return ; 
    }
    all(v) ; 
    set<ll>st;
    for(ll i=0;i<n;i++)
    {
        ll rem = v[i] % 4 ; 
        st.insert(rem) ; 
    }
    ll len = sz(st) ; 
    if(len==2)
    {
        cout << "4\n" ; 
    }
    else 
    {
        st.clear();
        len = sz(st) ;
        ll now = 4 ; 
        while(len<=1)
        {
            now *=2 ;
            st.clear() ; 
            for(ll i=0;i<n;i++)
            {
                ll rem =  v[i] % now ; 
                st.insert(rem) ; 
            } 
            len = sz(st) ; 
        }
        cout << now << '\n' ;
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}