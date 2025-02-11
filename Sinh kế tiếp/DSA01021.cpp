#include <bits/stdc++.h>
using namespace std;

int n,k,a[50];
bool ok;

void sinh(){
    int i = k;
    while(i>=1 && a[i] == n - k + i){
        --i;
    }
    if(i==0) ok = false;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j] = a[j-1]+1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok = true;
        set<int> old;
        set<int> next;
        for(int i=1;i<=k;i++){
            cin >> a[i];
            old.insert(a[i]);
        }
        sinh();
        if(ok){
            for(int i=1;i<=k;i++){
                next.insert(a[i]);
            }
            int cnt = 0;
            for(int s : old){
                if(next.find(s)==next.end()) cnt++;
            }
            cout << cnt <<'\n';
        }
        else{
            cout << k <<'\n';
        }
    }
}