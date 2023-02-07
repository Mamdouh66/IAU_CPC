#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

// So, Xenia's IQ appears to be low, the computer will prompt equation and we must order them
// in an increasing order. There are many ways to solve it, one way is by bruteforcing i.e.
// trying every element and checking if they are in the correct order

int main(){
    mamdouh

    string s; cin>>s;
    for(int i=0; i<s.size(); i+=2) // i+=2, to skip '+' and just compare the numbers
    {
        // we will loop until we make the equation in order
        for(int j=0; j<s.size()-1; j+=2) // s.size()-1 so we don't go out of bound
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s<<endl;

    return 0;
}