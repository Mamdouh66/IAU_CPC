#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    int s; cin >> s;
    int arr[s][s];
    for(int i = 0 ; i<s; i++){
        for(int j = 0; j < s; j++){
            cin >> arr[i][j]; // fill array
        }
    }

    int rtl = 0, ltr = 0; // define sum from Right-to-left and vice versa

    // for rtl
    for(int i = 0, j= 0; i < s; i++){
        rtl += arr[i][j];
        j++;
    }

    // for ltr 
    for(int i = s-1, j= 0; i >= 0; i--){
        ltr += arr[i][j];
        j++;
    }

    cout << abs(rtl - ltr) << endl;
    return 0;
}