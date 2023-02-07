#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    // try every combination until finding the biggest
    int a, b, max; cin >> a >> b;
    max = a+b; // hold a temp value
    if(a*b > max){
        cout << a*b << endl;
        return 0;
    } else if (a-b > max){
        cout << a - b << endl;
        return 0;
    }
    cout << max << endl; // if subtraction and multipliaction are low, print addition
    return 0;
}

/* ===another solution===

    int a, b;
    cin >> a>>b;
    cout << max(a+b, max(a-b,a*b)) <<"\n";

*/