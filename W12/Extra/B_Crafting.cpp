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
    vll a(n) , b(n) ; 
    for (ll i=0;i<n;i++)
    {
        cin >> a[i] ;    
    }
    ll neg = 0 , mn = 1e18 , ind = -1 ; 
    for (ll i=0;i<n;i++)
    {
        cin >> b[i] ;
        ll d = a[i] - b[i] ; 
        if (d<0)
        {
            neg++ ; 
            ind = i ; 
        } 
        else 
        {
            mn = min(mn,d) ;
        }
    }
    if (neg>1)
    {
        cout << "NO\n" ; 
        return ; 
    }
    else if (neg==0)
    {
        cout << "YES\n" ;
        return ; 
    }
    else if (neg==1)
    {
        for (ll i = 0 ; i<n; i++)
        {
            if (i==ind)
            {
                a[i]+=mn ; 
            }
            else a[i]-=mn ; 
        }
        for (ll i=0;i<n;i++)
        {
            if (a[i]<b[i])
            {
                cout << "NO\n" ; 
                return ; 
            }
        }
        cout << "YES\n" ;
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}