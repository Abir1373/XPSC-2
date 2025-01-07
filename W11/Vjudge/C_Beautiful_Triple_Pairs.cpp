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
    deque<ll>dq(n) ;  
    for(ll i=0;i<n;i++)
    {
        cin >> dq[i] ; 
    }
    map<tuple<ll,ll,ll>,ll>mp ;
    deque<ll>cur , tmp ;  
    for(ll i=0;i<n;i++)
    {
        cur.pb(dq[i]) ; 
        if(i==2)
        {
            tmp = cur ; 
            all(tmp) ; 
            mp[make_tuple(cur[0],cur[1],cur[2])]++  ; 
        }
        else if(i>2)
        {
            cur.ppf() ;
            tmp = cur ; 
            all(tmp) ;
            mp[make_tuple(cur[0],cur[1],cur[2])]++  ; 
        }
    }
    for(auto i: mp)
    {
        tuple<ll,ll,ll>x = i.f ; 
        cout << get<0>(x) << ' ' << get<1>(x) << ' ' << get<2>(x) << '\n' ; ; 
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}