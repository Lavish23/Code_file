#include<bits/stdc++.h>
using namespace std;
double pow(double x,int n)
{
    if(n==0) return 1;
    double ans=pow(x,n/2);
    if(n%2==0)
    return ans*ans;
    else
    return x*ans*ans;
}
int main()
{
    double x;
    int n;
    cin>>x>>n;
    cout<<pow(x,n);
}

// T.C->O(log2(n))