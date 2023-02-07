#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int n,k; cin >> n >> k;
    int arr[n];
    for(int i=0; i < n; i++)
        cin >> arr[i];
    int sum = 0, mul = 0, cnt = 0;
    sort(arr, arr+n, greater<int>());
    for (int i = 0; i < n; i++){
        sum += (arr[i]*(mul+1));
        cnt++;
        if (cnt == k){
            cnt = 0;
            mul++;
        }
    }
    cout << sum << endl;
    return 0;
}