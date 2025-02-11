#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> a;
    string s;
    while(cin >> s){
        if(s == "push"){
            int val;
            cin >> val;
            a.push(val);
        }
        else if(s=="pop"){
            a.pop();
        }
        else{
            if(a.empty()) cout <<"empty";
            else{                    
                stack<int> res;
                while(!a.empty()){
                    res.push(a.top());
                    a.pop();
                }
                while(!res.empty()){
                    cout << res.top() << " ";
                    a.push(res.top());
                    res.pop();
                }
            }
            cout << '\n';    
        }          
    }
    return 0;
}