#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        map<char,int> cnt;
        for(char c : s){
            cnt[c]++;
        }
        bool ok = true;
        for(auto it : cnt){
            if(it.second*2-1 > s.size()) ok = false;
        }
        if(ok) cout << "1" << '\n';
        else{
            cout << "-1" << '\n';
        }
    }
}