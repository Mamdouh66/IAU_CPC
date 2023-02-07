#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int queries;
    cin >> queries;
    priority_queue<int, vector<int>, greater<>> pq;
    queue<int> q;
 
    while (queries--) {
        int option;
        cin >> option;
     
   if (option == 1) {
            int x;
            cin >> x;
            q.push(x);
     
   } else if (option == 2) {
            if (!pq.empty()) {
                cout << pq.top() << endl;
                pq.pop();
        
    } else {
                cout << q.front() << endl;
                q.pop();
            }
        } else {
            while (!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}