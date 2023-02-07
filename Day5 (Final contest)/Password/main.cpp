#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int t;
    cin>>t;
    while(t--){
        string s;
        int upper=0, lower=0, c=0, digi=0; 
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(isupper(s[i])) upper++;
            else if(islower(s[i])) lower++;
            else if (isdigit(s[i])) digi++;
            else c++;
        }
        if(upper>=1 && lower>=1 && c>=1 && digi>=1 && (s.length()>=8))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    return 0;
}