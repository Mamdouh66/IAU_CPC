#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // A 
     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l, r;
    cin >> l >> r;
    // 0-based
    l--, r--;
    for (int i = l; i <= r; i++)
        cout << arr[i] << " ";
    return 0;
}
