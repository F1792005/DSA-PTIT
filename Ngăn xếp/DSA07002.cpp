#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    stack<int> a;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int val;
            cin >> val;
            a.push(val);
        }
        else if(s=="POP"){
            if(a.empty()){}
            else{
                a.pop();
            }
        }
        else{
            if(a.empty()) cout <<"NONE";
            else{
                cout <<a.top();                  
            }
            cout << '\n';    
        }          
    }
    return 0;
}