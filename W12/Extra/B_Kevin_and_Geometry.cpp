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
    vll v(n) ; 
    map <ll,ll>mp ; 
    ll two = 0 ; 
    vll ans ; 
    for (ll i = 0 ; i<n ; i++)
    {
        cin >> v[i] ; 
        mp[v[i]]++ ; 
        if (mp[v[i]] >= 4)
        {
            cout << v[i] << ' ' << v[i] << ' ' << v[i] << ' ' << v[i] << '\n' ;
            return ; 
        }
        if(mp[v[i]]==2) 
        {
            two += 1 ; 
            ans.pb(v[i]) ; 
        }
        if (two == 2)
        {
            cout << ans[0] << ' ' << ans[0] << ' ' << ans[1] << ' ' << ans[1] << '\n' ;
            return ; 
        }
    }
    if (two == 0)
    {
        cout << "-1\n" ; 
        return ; 
    }
    mp[ans[0]]-=2 ; 
    if (mp[ans[0]] == 0)
    {
        mp.erase(ans[0]) ; 
    }
    vll pre ; 
    for (auto i: mp)
    {
        pre.pb(i.f) ; 
    }
    ll len = sz(pre) ; 
    for (ll i = 0 ; i<len-1 ; i++)
    {
        ll d = abs(pre[i+1] - pre[i]) ; 
        if(d<=ans[0])
        {
            cout << ans[0] << " " << ans[0] << ' ' << pre[i] << " " << pre[i+1] << '\n' ; 
            return ; 
        }
    }
    cout << "-1\n" ;
}

signed main()
{
   FastRead;
   tc()
    solve();
}