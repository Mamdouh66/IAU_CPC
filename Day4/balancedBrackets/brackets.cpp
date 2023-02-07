#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;
 
int main(){
    mamdouh
    int n; cin>>n;
    while (n--){
        string s; cin>>s;
        stack<char> st;
        bool isBalanced = true; 
        for (int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    isBalanced = false;
                }
                else{
                    if (s[i] == ')' && st.top() == '('){
                        st.pop();
                    }
                    else if (s[i] == ']' && st.top() == '['){
                        st.pop();
                    }
                    else if (s[i] == '}' && st.top() == '{'){
                        st.pop();
                    }
                    else{
                        isBalanced = false;
                    }
                }
            }
        }
        if (st.empty() && isBalanced){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}