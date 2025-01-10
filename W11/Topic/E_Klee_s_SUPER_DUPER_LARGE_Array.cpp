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
    ll n , k ; 
    cin >> n >> k ;
    ll l=k , r=n+k-1 ; 
    ll presum = ((l-1)*l)/2 ; 
    ll totalsum = ((r+1)*r)/2 ; 
    ll midsum = (totalsum-presum) ; 
    ll half = midsum/2 , num , sum ; 
    while(l<=r)
    {
        ll mid = (l+r)>>1 ; 
        ll cursum = (mid*(mid+1))/2 ; 
        ll nowhave = cursum - presum ; 
        if(nowhave<=half)
        {
            num = mid ; 
            sum = nowhave ; 
            l = mid + 1 ; 
        }
        else r = mid - 1 ; 
    }
    ll lf1 , lf2 , rg1 , rg2 ; 
    lf1 = sum ; 
    rg1 = midsum-lf1 ;
    lf2 = sum + num + 1 ; 
    rg2 = midsum - lf2 ; 
    ll ans1 = abs(lf1-rg1) ; 
    ll ans2 = abs(lf2-rg2) ; 
    cout << min(ans1,ans2) << '\n';  
}

int main()
{
   FastRead;
   tc()
    solve();
}