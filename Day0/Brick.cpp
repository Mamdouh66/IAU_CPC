#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    int n,w; cin >> n >> w;

    // a truck can hold N kilograms, and a single brick weighs W kilograms, how many bricks can we put?
    // Basically We would divide what the truck can hold over the single brick weight, so we can get how many
    // we can put.
    cout << n/w << endl;
    return 0;
}