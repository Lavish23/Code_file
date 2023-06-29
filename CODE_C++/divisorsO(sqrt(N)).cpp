// print all the divisors of the number using o(sqrt(n)) their count and their sum also
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0,sum=0;
    for(int i=1;i*i<=n;++i)
    {
        if(n%i==0)
        {
            cnt++;
            sum+=i;
            if(n/i!=i)
            {
            cout<<" "<<i<<" "<<n/i<<" ";
            cnt++;
            sum+=n/i;
            }
        }
    }
    cout<<cnt<<" "<<sum<<endl;
}
// T.C -> O(sqrt(N))