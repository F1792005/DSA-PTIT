#include <bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok;

void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
}

void sinh(){
    int i = n-1;
    while(i>=1 && a[i] > a[i+1]){
        --i;
    }
    if(i==0) ok = false;
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> tmp(n);
        string res1 ="";
        ok = true;
        ktao();
        int cnt = 1;
        for(int i=1;i<=n;i++){
            cin >> tmp[i];
            res1+=tmp[i]+'0';
        }
        while(ok){
            string res2="";
            for(int i=1;i<=n;i++){
                res2+=a[i]+'0';
            }
            if(res1 == res2){
                cout << cnt <<'\n';
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