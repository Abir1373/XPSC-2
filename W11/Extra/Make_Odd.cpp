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
    ll have = 0 , option = 0 ; 
    string a , b ; cin >> a >> b ; 
    for(ll i=0;i<n;i++)
    {
        if(a[i]=='1' && b[i]=='1')
        {
            have++ ; 
        }
        else if(a[i]=='1' && b[i]=='0')
        {
            option++ ; 
        }
        else if(a[i]=='0' && b[i]=='1')
        {
            option++ ; 
        }
    }
    if(have&1)
    {
        cout << "YES\n" ; 
    }
    else if(have%2==0)
    {
        if(option==0)
        {
            cout<<"NO\n";
        }
        else 
        {
            cout<<"YES\n";
        }
    }
}

signed main()
{
   FastRead;
   tc()
    solve();
}