#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>subsets(vector<int>&nums)
{
    vector<vector<int>>all_subsets;
    int n=nums.size();
    int len=1<<n;
    for(int mask=0;mask<len;++mask)
    {
        vector<int>subset;
        for(int j=0;j<n;++j)
        {
            if(mask&(1<<j))
            subset.push_back(nums[j]);
        }
        all_subsets.push_back(subset);
    }
    return all_subsets;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
    vector<vector<int>>subset=subsets(v);
    for(auto sub:subset)
    {
        for(auto ele:sub)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    } 
}

// T.C -> O(n*2^n)
