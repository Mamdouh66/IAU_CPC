#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    string s,t; cin >> s >> t;    
    reverse(t.begin(), t.end());
    if(s==t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
