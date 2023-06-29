#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool is_prime=true;
    int n;
    cin>>n;
    if(n==1)
    is_prime=false;
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
        is_prime=false;
        break;
        }
    }
    cout<<is_prime<<endl;
}

//T.C -> O(SQRT(N))