#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>hsh(N,0);
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n+1;++i)
    {
        
        if(hsh[i]==0)
        {
            for(int j=2*i;j<=n+1;j+=i)
            hsh[j]=1;
        }
    }
    if(n>2) cout<<"2"<<endl;
    else cout<<"1"<<endl;
    for(int i=2;i<=n+1;++i)
    {
        if(hsh[i])
        cout<<"2"<<" ";
        else
        cout<<"1"<<" ";
    }
    
    
}