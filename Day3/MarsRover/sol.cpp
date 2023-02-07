#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    string str;
    cin >> str;
    int ans = 0;
    for( int i = 0; i < str.size(); i += 3 ){
        if( str[i] != 'S' ) ans++;
        if( str[i+1] != 'O' ) ans++;
        if( str[i+2] != 'S' ) ans++;
    }
    cout << ans << '\n';

    return 0;
}
