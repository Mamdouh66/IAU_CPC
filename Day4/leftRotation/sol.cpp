#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n,d;
    deque<int>dq;
    cin >> n >> d;
    while(n--){
        int x; 
        cin >> x;
        dq.push_back(x);
    }
    while(d--){
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for(auto val : dq)
        cout << val << " ";
    return 0;
}
