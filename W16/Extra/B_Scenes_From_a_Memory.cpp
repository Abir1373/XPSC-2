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
    string s ; cin >> s ; 
    ll two = 0 , three = 0 , five = 0 , seven = 0 ;
    for (ll i=0;i<n;i++)
    {
        if (s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9')
        {
            cout << "1\n" << s[i] << '\n' ; 
            return ;  
        }
        if (s[i]=='3')three++ ; 
        if (s[i]=='7')seven++ ; 
        if (s[i]=='5' && i)five++ ; 
        if (s[i]=='2' && i)two++ ; 
    } 
    cout << "2\n" ;
    if (two)
    {
        cout << s[0] << "2\n" ; 
        return ;
    }
    else if (five)
    {
        cout << s[0] << "5\n" ; 
        return ; 
    }
    else if (three>1)
    {
        cout << "33\n" ; 
        return; 
    }
    else if (seven>1)
    {
        cout << "77\n" ;
        return;  
    }
    for (ll i=0;i<n-1;i++)
    {
        for (ll j=i+1;j<n;j++)
        {
            if (s[j]=='7' && s[i]!='3')
            {
                cout << s[i] << "7\n" ; 
                return ;  
            }
            else if (s[j]!='7' && s[i]=='3')
            {
                cout << "3" << s[j] << "\n" ; 
                return ;
            }
        }
    }
}

signed main()
{
   Optimize;
   tc()
    solve();
}