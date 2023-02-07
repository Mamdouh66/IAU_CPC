#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
    
using namespace std; 
typedef long long ll;

int main()
{  
    mamdouh
    int freq1[26] = {};
    int freq2[26] = {};
    string s1,s2;
    
    cin >> s1 >> s2;
        for(int i = 0; i < s1.size(); i++)
    {
        freq1[ s1.at(i) - 'a']++;
    }
    for(int i = 0; i < s2.size(); i++)
    {
        freq2[ s2.at(i) - 'a']++;
    }
    
    int sum =0;
    for(int i = 0; i < 26; i++)
    {
        sum += abs(freq1[i]-freq2[i]);
    }
    cout << sum << endl;
    return 0;
}