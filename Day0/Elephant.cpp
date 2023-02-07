#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;


int main(){
    mamdouh

    // we need the min. number of steps so the elephant could reach his friend's house
    // knowing that the elephant can go 1,2,3,4,5 in one step
    int n; cin >> n;
    if(n % 5 == 0){
        cout << n/5 << endl; // if his friend's house is divisble by 5, we can get the min. steps by just dividing by 5
        return 0;
    } 
    cout << (n/5) + 1 << endl; // if not, we will walk with 5 position until we can't and surely his friend house will be in our range
    // so we can just add a step to the final value.
    // for '12', we would walk 5 => 5 => 3, which is 3 steps
    return 0;
}