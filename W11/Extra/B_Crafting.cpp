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

class Node {
    public:
    ll a , b , c ; 
    Node(ll a , ll b , ll c)
    {
        this->a = a ; 
        this->b = b ; 
        this->c = c ; 
    }
};

bool cmp(Node A , Node B)
{
    return A.c <= B.c ; 
}

void solve()
{
    ll n ; cin >> n ; 
    vector<Node>v; 
    vll x(n) , y(n); 
    for(ll i=0;i<n;i++)
    {
        cin >> x[i] ; 
    }
    for(ll i=0;i<n;i++)
    {
        cin >> y[i] ; 
        ll d = y[i]-x[i] ;
        v.pb(Node(x[i],y[i],d)) ;  
    }
    sort(v.begin(),v.end(),cmp) ; 
    ll have = 0 ; 
    for(ll i=0;i<n;i++)
    {
        v[i].a = v[i].a-have ;
        if(v[i].a<0)
        {
            cout << "NO\n" ;
            return ;
        } 
        ll d = v[i].a - v[i].b ; 
        if(d<0)
        {
            ll rem = i - 0 + 1 ;
            have += (abs(d) * rem) ; 
        }
    }
    cout << "YES\n";
}

signed main()
{
   FastRead;
   tc()
    solve();
}