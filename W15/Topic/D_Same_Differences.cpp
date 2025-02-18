#include <bits/stdc++.h>
 
using namespace std ;
 
void run()
{
   #ifndef Abir
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
   #endif
} 
 
#define f first
#define s second
#define pb push_back
#define pf push_front
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
 

void solve()
{
   ll n ;
   cin>>n ;
   deque<ll>v(n+1) ;
   map<ll,ll>mp ;
   ll c=0 ;
   for(ll i=1;i<=n;i++)
   {
      cin>>v[i] ;
      ll dif = v[i]-i ;
      if(mp[dif])c+=mp[dif] ;
      mp[dif]++ ;
   }
   cout(c) ;
}
 
int main()
{
   FastRead;
   //run();
   tc()
    solve();
}