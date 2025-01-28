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
    map<string,ll>mp , have , pal ; 
    while(n--)
    {
        string a , b , c ; cin >> a ; 
        b = a ; 
        c = a ; 
        rev(c) ;
        all(a) ; 
        if (a[0]==a[m-1])
        {
            have[b]++ ; 
        }
        else if (c==b)
        {
            pal[b]++ ; 
        }
        else 
        {
            mp[b]++ ;
        }
    }
    string l = "" , r = "" ; 
    for (auto &i: mp)
    {
        string x , y ;
        x = i.f ;
        y = x ; 
        rev(y) ; 
        ll mn = min(mp[x],mp[y]) ;
        if (mn)
        {
           while(mn--)
           {
                l += x ;
                r = y + r ;
           }
           mp[x] = 0 ; 
           mp[y] = 0 ; 
        }
    }
    string ans = "" , mid = "" , mid2="" , odd1_s , odd2_s ; 
    ll odd1 = 0 , odd2 = 0 ; 
    for (auto i : have)
    {
        ll cnt = i.s >> 1 ; 
        while (cnt--)
        {
            mid += i.f ;
            mid2 += i.f ; 
            cout << "inside\n";
        }
        if (i.s&1)
        {
            odd1 = 1 ; 
            odd1_s = i.f ; 
        }
    }
    for (auto i : pal)
    {
        ll cnt = i.s >> 1 ; 
        while (cnt--)
        {
            mid = i.f + mid ; 
            mid2 = mid2 + i.f ; 
        }
        if (i.s&1)
        {
            odd2 = 1 ; 
            odd2_s = i.f ; 
        }
    }
    if (odd1==1)
    {
        mid += odd1_s ; 
    }
    else if (odd2==1)
    {
        mid += odd2_s ; 
    }
    ans = mid + mid2 ; 
    ans = l + ans + r ; 
    ll len = sz(ans) ; 
    cout << len << '\n' ;
    cout << ans << '\n' ;
}

signed main()
{
   FastRead;
//    tc()
    solve();
}