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
#define ed endl
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

void solve()
{
    ll n ; 
    cin >> n ;
    set<ll>st ; 
    for(ll i=0,x;i<n;i++)
    {
        cin >> x ; 
        st.insert(x) ; 
    }
    vector<ll>ans ; 
    for(auto i: st)ans.pb(i) ; 
    ll ln = sz(ans) ; 
    ll Ans = 1 , c = 1 , ind = 0 ; 
    for(ll i=1;i<ln;i++)
    {
        ll d = ans[i]-ans[ind] ; 
        if(d<n)c++;
        else 
        {
            ind++;
        }
        Ans = max(Ans,c) ; 
    }
    cout(Ans);
}

int main()
{
   FastRead;
   tc()
    solve();
}