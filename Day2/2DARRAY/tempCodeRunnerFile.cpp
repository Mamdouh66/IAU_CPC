#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int MAX = 0, sum =0;
    int arr[6][6];
    for(int i = 0; i < 6; i++)
        for(int j =0; j < 6; j++)
            cin >> arr[i][j];
    
    for(int i = 0; i <4; i++){
        for(int j= 0; j < 4; j++){
            sum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            MAX = max(MAX, sum);
        }
        sum = 0;
    }
    cout << MAX << endl;
    return 0;
}
