#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int binary(int a,int b, int mod)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans*1LL*a)%mod;
        }
        a=(a*1LL*a)%mod;
        b>>=1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<binary(n,mod-2,mod);
}