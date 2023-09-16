Codeforces Link : https://codeforces.com/contest/1858/problem/A

#include<iostream>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b)
    {
        if(c%2==0)
        {
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    if(a+c>b+c)
    {
        cout<<"First"<<endl;
    }
    if(b+c>a+c)
    {
        cout<<"Second"<<endl;
    }
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
