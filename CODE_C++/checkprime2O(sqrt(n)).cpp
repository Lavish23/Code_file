#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>prime_factors;
    for(ll i=2;i*i<=n;++i)
    {
        while(n%i==0)
        {
            prime_factors.push_back(i);
            n/=i;
        }
    }
        if(n>1)
        prime_factors.push_back(n);

    for(auto ele:prime_factors)
    cout<<ele<<" ";

}

//T.C -> O(sqrt(N))

