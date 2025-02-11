#include <bits/stdc++.h>
using namespace std;

int n;
char a[100];
bool ok;
void ktao(){
    for(int i =  1; i<=n;i++){
        a[i] = 'A';
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i] == 'H'){
        a[i] = 'A';
        --i;
    }
    if(i==0) ok = false;
    else{
        a[i] = 'H';
    }
}

bool check(){
    if(a[1]!='H') return false;
    int cnt = 1;
    for(int i=2;i<n;i++){
        if(a[i]=='H'){
            cnt++;
            if(cnt == 2) return false;
        }    
        else{
            cnt = 0;
        }
    }
    if(a[n]=='H') return false;
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok = true;
        ktao();
        vector<string> res;
        while(ok){
            string tmp="";
            for(int i=1;i<=n;i++){
                tmp+=a[i];
            }
            if(check()) res.push_back(tmp);
            sinh();
        }
        for(string s : res){
            cout << s  << "\n";
        }
    }
    return 0;
}