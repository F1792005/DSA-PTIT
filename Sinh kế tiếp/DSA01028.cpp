#include <bits/stdc++.h>
using namespace std;

int n,k,a[100];
bool ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i>=0 && a[i]==n-k+i){
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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q >> k;
    set<int> tmp;
    for(int i=0;i<q;i++){
        int es;
        cin >> es;
        tmp.insert(es);
    }
    n = tmp.size();
    int i = 1;
    map<int,int> key;
    for(int s : tmp){
        key[i] = s;
        i++;
    }
    ok = true;
    ktao();
    while(ok){
        for(int i=1;i<=k;i++){
            cout << key[a[i]] <<" ";
        }
        cout <<'\n';
        sinh();
    }
    return 0;
}