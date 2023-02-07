#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n],b[n];
        for(int i = 0; i < n ;i++){
             cin >> a[i];
        }
        for(int i = 0; i < n ;i++){
             cin >> b[i];
        }
        sort(a, a+n); // 1 2 3 4 5..
        sort(b, b+n, greater<int>()); // 5 4 3 2 1..
        int sum =0, it = 0;
        for(int i = 0; i < n; i++){
            if(b[i] > a[i] && it != k){
                swap(b[i], a[i]);
                it++;
            }
        }
        for(int i = 0; i<n;i++)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}
