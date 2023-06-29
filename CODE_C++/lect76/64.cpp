// kisi number ko hm 2 prime ke product me convert kr skte hai ki nhi or vo prime number ke multiple array me present hai ki nhi
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
int hsh[N];
int canremove[N];
int hp[N];
vector<int>distinctpf(int x)
{
    vector<int>ans;
    while(x>1)
    {
    int pf=hp[x];
    while(x%pf==0)
    x/=pf;
    ans.push_back(pf);
    }
    return ans;
}
int main()
{
    for(int i=2;i<N;++i)
    {
        if(hp[i]==0)
        {
        for(int j=i;j<N;j+=i)
        {
            hp[j]=i;
        }
        }
    }
    // int x;
    // cin>>x;
    // vector<int>pf=distinctpf(x);
    // for(auto ele:pf)
    // cout<<ele<<" ";
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        hsh[x]=1;
    }
    for(int i=2;i<N;++i)
    {
        if(hsh[i])
        for(long long j=i;j<N;j*=i)
        {
            canremove[j]=1;
        }
    }
    while(q--)
    {
        int x;
        cin>>x;
        vector<int>pf=distinctpf(x);
        //distinct prime factor me se kisi do ke pair ki chose krenge uske liye 2 for loop lgenge
        bool ispossible=false;
        for(int i=0;i<pf.size();++i)
        {
            for(int j=i;j<pf.size();++j)
            {
                int product=pf[i]*pf[j];
                if(i==j && x%product!=0) continue; // if number is 30 pf is 2 3 5 no double repetition
                int remove=x/product;
                if(canremove[remove]==1)
                {
                    ispossible=true;
                    break;
                }
            }
            if(ispossible) break;
        }
        cout<<(ispossible?"YES\n":"NO\n");
    }
}