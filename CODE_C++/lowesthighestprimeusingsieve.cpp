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
    
    for(int i=1;i<=100;++i)
    cout<<lp[i]<<" "<<hp[i]<<endl;
}



