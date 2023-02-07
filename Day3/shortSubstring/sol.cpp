#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << s.front();
        for(int i = 1; i < s.length(); i+=2){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
