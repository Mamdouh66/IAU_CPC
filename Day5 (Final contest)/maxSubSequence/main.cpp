#include<bits/stdc++.h> 
using namespace std;

const int N=1005;
int a[N];
int n;
int ans=0;
int cnt=0;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i])
        {
            cnt++;
        }
        else
        {
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    cout<<max(ans,cnt)+1<<endl;
    return 0;
}

// 4