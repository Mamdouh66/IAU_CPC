#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int n,m,MAX = -1; cin >> n >> m;
    int arr[n*m];
    for(int i = 0; i < n*m; i++){
        cin >> arr[i];
        MAX = max(MAX, arr[i]);
    }
    cout << MAX << endl;
    return 0;
}