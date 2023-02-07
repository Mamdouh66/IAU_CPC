#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;


int main(){
    mamdouh

    int t; cin >> t;
    while(t--){
        int numCards, firstPlayer, secondPlayer;
        bool fiWon = false; // just to escape in the loop below
        cin >> numCards >> firstPlayer >> secondPlayer;

        int arr[numCards]; // save the values of all cards in an array
        for(int i = 0; i< numCards; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < firstPlayer; i++){ // Check first player cards, if he has the Glorius card, he'll win
            if(arr[i] == numCards){
                cout << "YES" << endl;
                fiWon = true;
                continue;
            }
        }
        if(!fiWon){ // if not, SecondPlayer wins
            cout << "NO" << endl;
        }
    }
    return 0;
}