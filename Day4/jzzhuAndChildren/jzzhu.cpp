#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    queue<int> q;
 
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        q.push(i);
    }
 
    while (q.size() > 1) {
        int child = q.front();
        q.pop();
        if (v[child] <= m)
            continue;
        v[child] -= m;
        q.push(child);
    }
 
    cout << q.front() << endl;
    return 0;
}