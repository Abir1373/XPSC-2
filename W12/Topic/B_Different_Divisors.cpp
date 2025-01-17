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

vll vis(200000) ; 
set<ll>primes ; 

void sieve()
{
    for(ll i=2;i<=1e5;i++)
    {
        if(vis[i]==1)
        {
            continue; 
        }
        primes.insert(i) ; 
        for(ll j=i+i;j<=1e5;j+=i)
        {
            vis[j] = 1 ; 
        }
    }
}

void solve()
{
    ll d ; 
    cin >> d ; 
    ll x = 1 , one , two , now = 0 ; 
    for(auto i: primes)
    {
        ll dif = i - x ; 
        if(now==0 && dif>=d)
        {
            one = i ; 
            x = one ; 
            now++ ; 
        }
        else if(now==1 && dif>=d)
        {
            two = i ; 
            break ; 
        }
    }
    cout << one * two << '\n' ;
}

signed main()
{
   FastRead;
   sieve() ; 
   tc()
    solve();
}