#include <iostream>
using namespace std;



int main()
{
	int t;
    cin>>t;
    int j[t], m[t], jSum=0, mSum=0;
    for(int i=0; i<t; i++){
        cin>>j[i];
        jSum += j[i];
    
    }
    for(int i=0; i<t; i++){
        cin>>m[i];
        mSum += m[i];
    }
    if(jSum == mSum){
        cout<<"fair";
    }
    else{
        cout<<"not fair";
    }
	
	return 0;
}