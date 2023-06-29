#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
const int N=1e5+10;
#define ll long long
int fact[N];
int binexp(ll a,ll b,ll m)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans*1LL*a)%m;
        }
        a=(a*a*1LL)%m;
        b>>=1;
    }
    return ans;
}
int main()
{
    fact[0]=1;
    for(int i=1;i<N;++i)
    fact[i]=(fact[i-1]*i*1LL)%m;
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        ll ans=fact[n];
        ans=(ans*1LL*fact[k])%m;
        int den=(fact[n]*fact[k-n]*1LL)%m;
        ans=(ans*1LL*binexp(den,m-2,m))%m;
        cout<<ans<<endl;
    }
}