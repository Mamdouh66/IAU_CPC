#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int n, tmp, cnt = 0; cin >> n;
    deque<int> x;
    for(int i =0; i < n; i++){
        cin >> tmp; // 1 2 3 1 2 3 4
        if(i == 0 and tmp == 1) cnt = 1;
        else if(tmp == 1){
            x.push_back(cnt);
            cnt = 1;
        }
        else if(tmp > 1) cnt = tmp;
        if(i == n-1) x.push_back(cnt);
    }
    int w = x.size();
    cout << w << '\n';
    while(w--){
 
        cout << x.front() << " ";
        x.pop_front();
 
    }
    return 0;
}