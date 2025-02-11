#include <bits/stdc++.h>
using namespace std;

string nextt(string s){
    int n = s.size();
    int i = n - 1;
    while(i>=0 && s[i]=='0'){
        s[i] = '1';
        --i;
    }
    if(i>=0 && s[i]=='1'){
        s[i] = '0';
    }
    else{
        s = string(n,'1');
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout << nextt(s) <<'\n';
    }
}