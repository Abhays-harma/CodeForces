CodeForces Link : https://codeforces.com/problemset/problem/1855/A

#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums)
{
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=nums[i+1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;

    vector<int> nums(n);
    for(auto &it:nums) cin>>it;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==i+1) count++;
    }

    if(count%2!=0)
    {
        count++;
    }
    cout<<count/2<<endl;
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
