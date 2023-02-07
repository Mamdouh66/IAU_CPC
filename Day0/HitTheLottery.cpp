#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    int n,cnt=0;
    // Saving the denominations in an array is optional, just for optimization
    int arr[]={100,20,10,5,1};
    cin>>n;

    for(int i=0; i<5; i++)
    {
        // if the number could be divided by a one of the denomiations, such as,
        // cnt = 125/100 => 1, which means we can use '100' one time and add it the counter
        cnt+=n/arr[i];
        // 125 % 100 will give us two digits to the right i.e. '25'
        // so when go back again in the loop we will do the same process with '25'
        n=n%arr[i];
    }
    cout<<cnt<<endl;
    return 0;
}