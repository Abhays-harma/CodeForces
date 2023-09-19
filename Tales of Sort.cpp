CodeForces Link : https://codeforces.com/contest/1856/problem/A

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto &it:nums) cin>>it;
    int maxi=0;
    for(int i=1;i<n;i++)
    {
        if(nums[i]<nums[i-1])
        {
            if(maxi<nums[i-1])
            {
                maxi=nums[i-1];
            }
        }
    }
    cout<<maxi<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
