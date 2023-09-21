CodeForces Link : https://codeforces.com/problemset/problem/1851/B

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void solve()
{
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> odd;
    vector<int> even;
    vector<int> ans;

    for(auto &it:nums)
    {
        if(it%2==0)
        {
            even.push_back(it);
        }
        else{
            odd.push_back(it);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int x=0;
    int y=0;

    for(int i=0;i<n;i++)
    {
        if(nums[i]%2==0)
        {
            ans.push_back(even[x]);
            x++;
        }
        else{
            ans.push_back(odd[y]);
            y++;
        }
    }

    for(int i=0;i<n-1;i++)
    {
        if(ans[i]>ans[i+1])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
