#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

// The question is long but its super simple not like how long it is
// Harry want to know when the second collision accures, how distant will he be from it
// So we basically will get the place wherer the turned around at first then multiply it 
// by harry's spell speed to know the distance.
int main(){
    mamdouh

    double l,p,q,t; cin >> l >> p >> q;
    t = l/(p+q); // the place of the first collision
    cout << t * p << endl;
    return 0;
}