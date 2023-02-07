#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    //K
    int sum,d,m, cnt = 0, n; cin >> n;
    int arr[n];
    for(int i =0; i < n; i++)
        cin >> arr[i];
    cin >> d >> m;
    for(int i = 0; i <= n - m; i++){
        sum = 0;
        for(int j = i; j < i+m; j++){
            sum += arr[j];
        }
        if(sum == d)
            cnt++;  
    }
    cout << cnt << endl;
    return 0;
}
