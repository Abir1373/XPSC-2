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
    ll abc = INT_MAX , a = INT_MAX , b = INT_MAX , c = INT_MAX , ab = INT_MAX , ac = INT_MAX , bc = INT_MAX ;
    while(n--)
    {
        ll v ; string s ; 
        cin >> v >> s ; 
        all(s) ; 
        if (s=="ABC")abc = min(abc,v) ; 
        if (s=="A")a = min(a,v) ;
        if (s=="B")b = min(b,v) ; 
        if (s=="C")c = min(c,v) ; 
        if (s=="AB")ab = min(ab,v) ; 
        if (s=="AC")ac = min(ac,v) ; 
        if (s=="BC")bc = min(bc,v) ;
    }
    ll mn = abc ;  
    mn = min({a+bc,ab+bc,ac+bc,b+ac,c+ab,mn,a+b+c,ac+ab}) ; 
    if (mn>=INT_MAX)mn = -1 ; 
    cout << mn << '\n' ;
}

signed main()
{
   Optimize;
//    tc()
    solve();
}