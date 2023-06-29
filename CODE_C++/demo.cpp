#include<bits/stdc++.h>
using namespace std;
#define ll long long
const  int N=1e5+10;
vector<bool>is_prime(N,1);
vector<ll>hp(N,0);
//basically need to check the distinct prime number if it is three then print yes else no
 vector<ll>distinctpf(ll h)
{
    vector<ll>ans;
    while(h>1)
    {
        int pf=hp[h];
        while(h%pf==0) h/=pf;
        ans.push_back(pf);
    }
    return ans;
}

int main()
{
    is_prime[0]=is_prime[1]=false;

    for(ll i=2;i<N;++i)
    {
        if(is_prime[i]==true)
        {
            hp[i]=i;
            for(int j=2*i;j<N;j+=i)
            {
                is_prime[j]=false;
                hp[j]=i;
            }

        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll x,cnt=0;
        cin>>x;
        ll h=x;
        while(x>1)
        {
         vector<ll>primefactors;
         
        ll prime=hp[x];
        while(x%prime==0)
        {
            cnt++;
        
            x/=prime;
            
            primefactors.push_back(prime);
        }
            

        }
        // cout<<cnt<<endl;
        vector<ll>ans=distinctpf(h);
        ll flag=ans.size();
        
       if(cnt==2 and flag==1)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
        
    }
    
}