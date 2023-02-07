#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // L
    int b,n,m; cin >> b >> n >> m;
    int arr1[n];
    int arr2[m];
    for(int i = 0; i <n; i++)
        cin >> arr1[i];
    for(int i = 0; i <m; i++)
        cin >> arr2[i];
    
    int sum = 0, MAX = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum = arr1[i] + arr2[j];
            if(sum <= b)
                MAX = max(MAX, sum);
        }
        sum = 0;
    }
    cout << MAX;
    return 0;
}
