#include <bits/stdc++.h>
using namespace std;

int n,k,a[100];
bool ok;
void ktao(){
    for(int i = 1;i<=n;i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = false;
    else{
        a[i] = 1 ;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok = true;
        ktao();
        vector<string> res;
        while(ok){
            string tmp ="";
            int cnt = 0;
            for(int i = 1;i<=n; i++){
                if(a[i] == 1) cnt++;
                tmp += a[i] + '0';
            }
            if(cnt == k){
                res.push_back(tmp);
            }   
            sinh();
        }
        for(string s : res){
            cout << s <<'\n';
        }
    }
    return 0;
}   