#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh

    int n; cin >> n;
    int a,b,c,d;

    // A beautiful year is a year with distinct digits, which means a digit does not repeat in the number
    // 2012 isn't a beautiful year because '2' was there twice.
    // Basically, we will increment by one and test every number until we find the solution
    
    while(true){
        // increment n by one until we find the solution
        n++;
        // the 4 lines below are for getting every digit in the number in a single variable
        // n = 2013, a = 2, b = 0, c = 1, d = 3;
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n / 10 % 10;
        int d = n % 10;
        // check if a number repeated itself or not
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            // if not break and save that number
            break;
        }
    }
    cout << n;

    return 0;
}