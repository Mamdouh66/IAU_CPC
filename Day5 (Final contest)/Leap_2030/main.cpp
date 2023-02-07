#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

void solve(){
    int n,m; cin >> n >> m;
        int arr[n][m];
        for(int i = 0; i < n; i++){
            string str; cin >> str;
            for(int j = 0; j < m; j++){
                arr[i][j] = str[j] - '0';
            }
        }
        int a,b; cin >> a >> b;
        int sub[a][b];
        for(int i=0; i< a;i++){
            string str; cin >> str;
            for(int j= 0; j < b; j++){
                sub[i][j] = str[j] - '0';
            }
        }
        for(int i = 0; i <= n-a; i++){
            for (int j = 0; j <= m - b; j++){
                bool flag = true;
                for(int k = i; k < a + i; ++k){
                    for(int l = j; l < b+j; ++l){
                        if(arr[k][l] != sub[k - i][l - j]){
                            flag = false;
                            k = a + i;
                            break;
                        }
                    }
                }
                if(flag){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    cout << "NO" << endl;
}
 
int main(){
    mamdouh
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}