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
    ll a1 , a2 , b1 , b2 , x , y ; 
    cin >> a1 >> a2 >> b1 >> b2 >> x >> y ; 
    
    // case 1 : x common 

    if (x==a1 && x==b1)
    {
        if ((y>a2 && y>b2) || (y<a2 && y<b2))
        {
            cout << abs(a2-b2)  << '\n' ; 
        }
        else 
        {
            cout << abs(a2-b2)+2 << '\n' ; 
        }
    }

    // case 2 : y common

    else if (y==a2 && y==b2)
    {
        if ((x>a1 && x>b1) || (x<a1 && x<b1))
        {
            cout << abs(a1-b1) << '\n' ; 
        }
        else cout << abs(a1-b1)+2 << '\n' ; 
    }

    else 
    {
        cout << abs(a1-b1) + abs(a2-b2) << '\n' ;
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}