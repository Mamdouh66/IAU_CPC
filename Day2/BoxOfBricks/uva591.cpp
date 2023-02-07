#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // M
    int st =1, n;
    while(cin >>n){
        int sum =0, cnt = 0;
        if(n == 0) break;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        int k = sum/n;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > k){
                ans += arr[i] - k;
            }
        }
        cout << "Set #" << st++ << endl;
        cout << "The minimum number of moves is " << ans << "." << endl;
        cout << endl;
    }
    return 0;
}