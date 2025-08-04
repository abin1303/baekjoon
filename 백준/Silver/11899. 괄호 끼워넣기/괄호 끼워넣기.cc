#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string c;
    cin >> c;
    if(!(1<=c.size()&&c.size()<=50))
        return 1;
    
    stack<char> S;
    int ret = 0;
    for(int i = 0; i< c.size(); i++)
    {
        if( c[i] == '(' ) {
            S.push(c[i]);
        }
        else if( c[i] == ')' ) {
            if(S.empty())
                ret++;
            else
                S.pop();
        }
    }

    if(!S.empty())
        ret = ret + S.size();

    cout << ret << endl;
    return 0;
}