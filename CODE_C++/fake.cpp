#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
    ll n;
    cin>>n;
    vector<ll>prime_factors;
    set<ll>s;
    for(ll i=2;i*i<=n;++i)
    {
        while(n%i==0)
        {
            prime_factors.push_back(i);
            s.insert(i);
            n/=i;
        }
    }
        if(n>1)
        {
        prime_factors.push_back(n);
        s.insert(n);
        }

    ll cnt=prime_factors.size();
    if(cnt==2 and s.size()==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }

}

//T.C -> O(sqrt(N))

