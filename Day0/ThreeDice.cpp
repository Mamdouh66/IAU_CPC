#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    int a,b,c; cin >> a >> b >> c;

    // The sum of the opposite sides is 7, a, b, c are the values of the upper side
    // We want the sum of the values in the lower side; so if we're given an upper value
    // and we need the value in the lower end we just subtract 7, because their sum is 7

    cout << (7-a) + (7-b) + (7-c) << endl;
    return 0;
}