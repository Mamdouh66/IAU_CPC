#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    // I
    string s=""; getline(cin, s); //getline because of the spaces in input
    char arr[s.length()]; //char array because sort function doesn't take string
    int cnt = 1; 
    int it = 0; // iterator for char array size
    for(int i = 1; i < s.length()-1; i++){ // length-1 to skip the last '}'
        if(s[i] != ',' && s[i] !=' '){ 
            arr[it] = s[i];
            it++;
        }
    }
    if(it == 0){
        cout << 0;
        return 0;
    }
    sort(arr, arr+it);
    for(int i = 1; i < it; i++){
        if(arr[i] != arr[i-1]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
