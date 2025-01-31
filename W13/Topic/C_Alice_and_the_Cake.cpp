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
#define sz(s) s.size() 
#define FastRead ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define fr(n) for(ll i=0;i<n;i++)
#define rfr(n) for(ll i=n-1;i>=0;i--) 
#define inp(qq)  ll qq; cin>>qq ;


void solve()
{
   inp(n) ;
   vector<ll>v(n),v2 ;
   ll s=0 ;
   map<ll,ll>mp ; 
   fr(n)
   {
      cin>>v[i] ; 
      mp[v[i]]++ ; 
      s+=v[i] ; 
   }
   priority_queue<ll>pq ;
   pq.push(s) ; 
   for(ll i=1;i<n;i++)
   {  
      while(!pq.empty() and mp[pq.top()])
      {
         v2.pb(pq.top()) ; 
         mp[pq.top()]-- ; 
         pq.pop() ;
      }
      if(!pq.empty())
      {
         ll a , b ;
         if(pq.top()&1)
         {
            a = pq.top()/2+1;
            b = pq.top()/2 ; 
         }
         else
         {
            a = pq.top()/2 ;
            b = a ;
         }
         pq.push(a) ; 
         pq.push(b) ;
         pq.pop() ;
      }
   }
   while(!pq.empty() and mp[pq.top()])
   {
      v2.pb(pq.top()) ;
      mp[pq.top()]-- ; 
      pq.pop() ;
   }
   all(v) ; all(v2) ;
   v==v2 ? cout("yes") : cout("no") ;
}
   
 
int main()
{
   FastRead;
   //run();
   tc()
    solve();
}