#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
 
    int n; cin >> n;
    int arr[n];
 
    for(int i =0; i< n; i++)
        cin >> arr[i];
    
    vector<int> neg;
    vector<int> zero;
    vector<int> pos;
 
    for(int i = 0; i<n; i++){
 
        if(arr[i] < 0)
         neg.push_back(arr[i]);
        
        if(arr[i] == 0)
            zero.push_back(arr[i]);
        
        if(arr[i] > 0)
            pos.push_back(arr[i]);
    }
 
    if (pos.empty()){ // neg * neg = pos
        int a = neg.back();
        neg.pop_back();
        int b = neg.back();
        neg.pop_back();
        // send it to positive vector
        pos.push_back(a);
        pos.push_back(b);
    }

    if (neg.size() % 2 == 0){ 
        zero.push_back(neg.back());
        neg.pop_back();
    }
 
    // priniting
    cout << neg.size() << " ";
    for(auto it: neg){
        cout << it << " ";
    }
    cout << endl;
    cout << pos.size() << " ";
    for(auto it: pos){
        cout << it << " ";
    }
    cout << endl;
    cout << zero.size() << " ";
    for(auto it: zero){
        cout << it << " ";
    }
    return 0;
}