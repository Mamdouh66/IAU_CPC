#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    string s; cin >> s;
    while(!s.empty() && s.back()=='0')
        s.pop_back();
    string rs = s;
    reverse(rs.begin(), rs.end());
    cout << (rs == s? "Yes": "No")<< endl;
    return 0;
}
