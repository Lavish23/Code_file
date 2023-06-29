#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
// 3^13 i.e(3^1101) i.e (3^(8+4+0+1))
int binaryiterative(int a,long long b,int mod) // when b is very large
{
    int ans=1;
    while(b>0)
    {
        if(b&1) // checking b is odd or not
        ans=(ans*a)%mod;
        a=(a*a)%mod;
        b>>=1;  // basically dividing b by 2 i.e(1101 ->110 ->11 -> 1)
    }
    return ans;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<binaryiterative(a,binaryiterative(b,c,mod-1),mod);
}

// 50^64^32
// T.C -> O(log(N))