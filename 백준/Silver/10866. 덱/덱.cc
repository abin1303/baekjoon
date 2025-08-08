#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(!(1<=N && N<=10000))
        return 1;
    
    deque<int> DQ;
                
    while(N--){
        string c;
        int x;
        cin >> c;
        if (c == "push_front"){
            cin >> x;
            DQ.push_front(x);
        }
        else if (c == "push_back") {
            cin >> x;
            DQ.push_back(x);

        }
        else if (c == "pop_front") {
            if(DQ.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << DQ.front() << endl;
                DQ.pop_front();
            }
        }
        else if (c == "pop_back") {
            if(DQ.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << DQ.back() << endl;
                DQ.pop_back();
            }
            
        }
        else if (c == "size") {
            cout << DQ.size() << endl;
        }
        else if (c == "empty") {
            if(DQ.empty())  cout << 1 << endl;
            else    cout << 0 << endl;
        }
        else if (c == "front") {
            if(DQ.empty()) {
                cout << -1 << endl;
            }
            else
                cout << DQ.front() << endl;
            
        }
        else if (c == "back") {
            if(DQ.empty()) {
                cout << -1 << endl;
            }
            else
                cout << DQ.back() << endl;
        }
    }
    return 0;
}