#include<bits/stdc++.h>
using namespace std;
const long long mod=1e18+9;  // when mod is very large
#define ll long long
int binaryaddition(ll a,ll b) // adding a , b times
{
    ll ans=0;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans+a)%mod;
        }
        a=(a+a)%mod;
        b>>=1;
    }
    return ans;
}
 int binaryiterative(ll a,ll b)
 {
    ll ans=1;
    while(b>0)
    {
        if(b&1) // when b is odd
        {
            ans=binaryaddition(ans,a);
        }
        a=binaryaddition(a,a);
        b>>=1;
    }
    return ans;
 }
 int main()
 {
    int a,b;
    cin>>a>>b;
    cout<<binaryiterative(a,b);
 }