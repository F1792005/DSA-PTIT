#include <bits/stdc++.h>
using namespace std;

string nextbinary(string s){
    int n =s.size();
    for(int i = n-1 ;i>=0;i--){
        if(s[i]=='0'){
            s[i] = '1';
            for(int j=i+1;j<n;j++){
                s[j] = '0';
            }
            return s;
        }
    }
    return string(n,'0');
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout << nextbinary(s) <<'\n';
    }
    return 0;
}