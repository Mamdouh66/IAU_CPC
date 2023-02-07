#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // G
    int n; cin >> n;
    n++; //outliers
    int arr[n];
    for(int i = 1; i < n; i++)
        cin >> arr[i];
    int s; cin >> s;
    for(int i = 0; i <s;i++){
        int x,y; cin >> x >> y;
        if(x==1){
            arr[x+1] += abs(arr[x] - y);
            arr[x] = 0;
        } else if(x== n-1){
            arr[x-1] += abs(arr[x] - (arr[x] - y) -1); 
            arr[x] = 0;
        } else{
            arr[x+1] += abs(arr[x] - y);
            arr[x-1] += abs(arr[x] - (arr[x] - y) -1);
            arr[x] = 0;
        }
    }
    for(int i = 1; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}
