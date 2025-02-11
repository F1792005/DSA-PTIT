#include <bits/stdc++.h>
using namespace std;

int n,a[17];
bool ok;
void ktao(){
    for(int i = 1;i<=n;i++){
        a[i] = 6;
    }
}

void sinh(){
    int i = n;
    while(i>=1 && a[i]==8){
        a[i] = 6;
        i--;
    }
    if(i==0) ok = false;
    else{
        a[i] = 8;
    }
}

bool check(){
    if(a[1]!=8) return false;
    int cnt8 = 1,cnt6 = 0;
    for(int i = 2 ;i<n;i++){
        if(a[i]==8){
            cnt8++;
            if(cnt8 == 2) return false;
            cnt6=0;
        }
        else{
            cnt6++;
            if(cnt6==4) return false;
            cnt8 = 0;
        }
    }
    if(a[n]==6){
        cnt6++;
        if(cnt6 == 4) return false;
        return true;
    }
    else return false;
}

int main(){
    cin >> n;
    ok = true;
    ktao();
    vector<string> res;
    while(ok){
        string tmp = "";
        for(int i=1;i<=n;i++){
            tmp+=a[i]+'0';
        }
        if(check()) res.push_back(tmp);
        sinh();
    }
    for(string s : res){
         cout << s <<"\n";
    }
}