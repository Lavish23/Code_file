#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<bool>is_prime(n,1);
vector<int>lp(n,0),hp(n,0);
int main()
{
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<n;++i)
    {
        if(is_prime[i]==true)
        {
            lp[i]=hp[i]=i;
            for(int j=2*i;j<n;j+=i)
            {
                is_prime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    int n;
    cin>>n;
    vector<int>prime_factors;
    while(n>1)
    {
        int prime_factor=lp[n];
        while(n%prime_factor==0)
        {
            prime_factors.push_back(prime_factor);
            n/=prime_factor;
        }
    }
    for(auto ele:prime_factors)
    cout<<ele<<" ";
}



