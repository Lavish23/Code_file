#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    // 0 1 1 2 3 5 8 13 21 34 55
    int n;
    cin>>n;
    cout<<fibo(n);

}

//T.C -> O(2^n)
// S.C -> O(n)