#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // C
    int n, sum =0; cin >> n;
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
        cin >> arr[i]; // time to take to raise
    }
    int a,b, it =0; cin >> a >> b; // define an iterator
    for(int i = a-1; i < n; i ++){
        if(it < b-a){ // if the diffrence of ranks less than the iterator
        sum += arr[i];// take the sum of ranks
        } else{
            break;
        }
        it++; //increment the iterator
    }
    
    cout << sum;
    return 0;
}