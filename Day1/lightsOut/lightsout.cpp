#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    
    int pressed[4][4];
    int toggled[4][4];
    for(int i =1 ; i <= 3; i++){
        for(int j =1; j <= 3; j++){
            cin >> pressed[i][j];
            toggled[i][j] = pressed[i][j];
        }
    }
    for(int i =1 ; i <= 3; i++){
        for(int j =1; j <= 3; j++){
            toggled[i][j-1] += pressed[i][j];
            toggled[i][j+1] += pressed[i][j];
            toggled[i-1][j] += pressed[i][j];
            toggled[i+1][j] += pressed[i][j];
        }
    }
    for(int i = 1; i <= 3; i++){
        for(int j =1; j <=3; j++){
            if(toggled[i][j] % 2){
                cout << 0;
            } else{
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;
}