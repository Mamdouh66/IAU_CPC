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
        sort(s.begin(), s.end());
        bool diverse = true;
        for(int i = 1; i < s.size(); i++){

            if(s[i] - s[i-1] != 1){
                diverse = false;
                break;
            }
        }
        cout << ((diverse)? "Yes": "No" )<< endl;
    }
    return 0;
}