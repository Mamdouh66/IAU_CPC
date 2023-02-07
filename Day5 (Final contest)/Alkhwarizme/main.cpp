#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_operand(string s)
{
    return (s=="+" || s=="-" || s=="*" || s=="/");
}

int operation(int a, int b, string s)
{
    if(s=="+")
        return a+b;
    else if(s=="-")
        return a-b;
    else if(s=="*")
        return a*b;
    else if(s=="/" && b != 0)
        return a/b;
    return 0;
}

int main()
{
    vector<int> v;
    string s,o;
    while(cin >> s)
    {
        if(is_operand(s))
        {
            o = s;
        }
        else
        {
            int x = stoi(s);
            v.push_back(x);
        }
    }
    int a = v[0];
    int b = v[1];
    int c = operation(a, b, o);
    cout << abs(c) << endl;
    return 0;
}

// 6
// always 3 characters
// abs