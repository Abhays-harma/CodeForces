Codeforces Link : https://codeforces.com/problemset/problem/1859/A

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++) cin>>nums[i];

    sort(nums.begin(),nums.end());
    if(nums[0]==nums[n-1])
    {
        cout<<"-1"<<endl;
        return;
    } 

    int max_element=nums[n-1];
    
    vector<int> b;
    vector<int> c;

    for(int i=n-1;i>=0;i--)
    {
        if(nums[i]==max_element) c.push_back(nums[i]);
        else
        {
            b.push_back(nums[i]);
        }
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(auto &it:b) cout<<it<<" ";
    cout<<endl;
    for(auto &it:c) cout<<it<<" ";
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
