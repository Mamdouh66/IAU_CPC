#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        string ss = s.substr(i,2);
        if(ss[0] == ss[1])cnt++;
    }
    cout << cnt << endl;
    return 0;
}
