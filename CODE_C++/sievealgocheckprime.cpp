#include<bits/stdc++.h>
using namespace std;
const int n=1e5+7;
vector<bool>is_prime(n,1);
int main()
{
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<n;++i)
    {
        if(is_prime[i]==true)
        {
            for(int j=2*i;j<n;j+=i)
            is_prime[j]=false;
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if(is_prime[n])
        cout<<"prime"<<endl;
        else
        cout<<"not prime"<<endl;
    }
}

//T.C -> O(n*log(n)) for all divisors



