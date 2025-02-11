#include <bits/stdc++.h>
using namespace std;

int n,k,a[20];
bool ok;
void ktao(){
    for(int i=1;i<=k;i++){
        a[i] = i;
    }
}

void sinh(){
    int i = k;
    while(i>=1 && a[i] == n - k + i){
        --i;
    }
    if(i==0) ok = false;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok = true;
        ktao();
        int cnt = 1;
        vector<int> tmp(n);
        string res1 ="";
        for(int i=1;i<=k;i++){
            cin >> tmp[i];
            res1+=tmp[i]+'0';
        }
        while(ok){
            string res2="";
            for(int i=1;i<=k;i++){
                res2+=a[i]+'0';
            }
            if(res1 == res2){
                cout << cnt << '\n';
                break;
            }
            else{
                sinh();
                cnt++;
            }
        }
    }
    return 0;
}