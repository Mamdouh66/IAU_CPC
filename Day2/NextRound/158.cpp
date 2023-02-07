#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // D
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }
    
    int cnt = 0;
    for(int i = 0; i <n; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}