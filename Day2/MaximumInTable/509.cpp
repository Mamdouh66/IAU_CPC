#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // B
    int n , MAX = 0; cin >>n;
    int arr[n][n] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0) arr[i][j] = 1;
            if(j == 0) arr[i][j] = 1;
            if(i != 0 && j != 0){
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
            MAX = max(MAX, arr[i][j]);
        }
    }
    cout << MAX << endl;
    return 0;
}