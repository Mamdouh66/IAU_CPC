#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    int w; cin >> w;
    if(w%2 == 0 && w != 2){ // any number divisble by 2 we could find a two even parts, except 2 because it would be 1,1
        cout <<"YES" << endl;
    } else{
        cout <<"NO"<< endl;
    }
    return 0;
}