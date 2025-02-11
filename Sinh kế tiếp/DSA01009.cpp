#include <bits/stdc++.h>
using namespace std;

int n,k;
char a[20];
bool ok;
void ktao(){
    for(int i=1 ;i<=n;i++){
        a[i] = 'A';
    }
}

void sinh(){
    int i = n;
    while(i>=1 && a[i]=='B'){
        a[i] ='A';
        i--;
    }
    if(i==0) ok = false;
    else{
        a[i]='B';
    }
}

bool check(string s){
    int cnt = 0, block =0;
    for(char c : s){
        if(c == 'A') cnt++;
        else{
            if(cnt == k){
                block++;
                cnt = 0;
            }
            else cnt = 0;
        }
    }
    if(cnt == k) block++;
    if(block == 1) return true;
    return false;
}

int main(){
    cin >> n >> k;
    ok = true;
    ktao();
    vector<string> res;
    while(ok){
        string tmp = "";
        for(int i = 1;i<=n;i++){
            tmp += a[i];
        }
        if(check(tmp)) res.push_back(tmp);
        sinh();
    }
    cout << res.size() <<"\n";
    for(string s : res){
        cout << s <<"\n";
    }
}