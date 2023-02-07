#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    string str; cin >> str;
    int A[26] = {}, sum = 0;
    for (int i = 0; i < str.length(); ++i)
        A[str[i] - 'a'] ++;
    for (int i = 0; i < 26; ++i)
        sum = sum + (A[i] % 2);
    cout << (sum>2? "YES": "NO");
    return 0;
}
