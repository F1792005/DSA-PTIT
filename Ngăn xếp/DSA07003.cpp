#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<int> k;
        for(char c : s){
            if(c=='('){
                k.push('(');
            }
            else if(c==')'){
                k.pop();
            }
        }
        if(k.empty()) cout << "YES" <<'\n';
        else cout << "NO" <<'\n';
    }
    return 0;
}