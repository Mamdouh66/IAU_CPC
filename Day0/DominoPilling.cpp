#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    int m,n; cin >> m >> n;

    // Basically, you're given a square of size M*N, and you need to know how many dominoes can be put in there
    // where a single piece is of size 2*1 which means its of size 2, so, when we have a square of size 16, we can put 8 dominos in it
    // beacuse each peice equals 2
    cout << (m*n)/ 2<< endl;
    return 0;
}