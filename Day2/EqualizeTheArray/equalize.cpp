#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n,x, MAX=0; cin >> n;
    int freq[101] = {};
    for(int i = 0; i < n;++i){
        cin >> x;
        freq[x]++;
        MAX = max(MAX, freq[x]);
    }
    cout << abs(n-MAX)<< endl;
    return 0;
}