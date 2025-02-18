// Bismillahir Rahmanir Raheem

// author : Dewan Abir Mahmud 

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define Optimize ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define inf INT_MAX ;
#define clr(x,y) memset(x,y,sizeof x)
#define pii pair<ll,ll>
#define vll vector<ll>
#define vpi vector<pii>

template <typename T> using o_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n ; cin >> n ; 
    map<ll,ll>cnt ; 
    for (ll i=0;i<n;i++)
    {
        string s ; cin >> s ; 
        ll len = sz(s) ; 
        cnt[s[len-1]-48]++ ; 
    }
    if (cnt[1]>=3)
    {
        cout << "YES\n" ; 
        return ; 
    }
    for (ll i=0;i<=9;i++)
    {
        if (cnt[i]>1 && i!=1)
        {
            ll one = 3 - (2*i) ; 
            ll two = 13 - (2*i) ; 
            ll three = 23 - (2*i) ; 
            if (cnt[one] || cnt[two] || cnt[three])
            {
                cout << "YES\n" ; 
                return ;
            }
        } 
    }
    for (ll i=0;i<=9-2;i++)
    {
        if (cnt[i]==0)continue ;
        for (ll j=i+1;j<=9-1;j++)
        {
            if (cnt[j]==0)continue ;
            for (ll k=j+1;k<=9;k++)
            {
                if (cnt[k]==0)continue ;
                if (i+j+k==13 || i+j+k==23 || i+j+k==3)
                {
                    cout << "YES\n" ; 
                    return ;
                }
            }
        }
    }
    cout << "NO\n" ; 
}

signed main()
{
   Optimize;
   tc()
    solve();
}