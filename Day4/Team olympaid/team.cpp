#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int n,x; cin >> n;
    vector<int> v1,v2,v3;
    for(int i = 1; i <= n;i++){
        cin >> x;
        if(x == 1){
             v1.push_back(i);
        }
        else if(x == 2){
             v2.push_back(i);
        }  else{
            v3.push_back(i);
        }
    }
    int mn = min(min(v1.size(), v2.size()), v3.size());
	cout << mn << endl;
	for (int i = 0; i < mn; ++i) {
		cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
	}
    return 0;
}