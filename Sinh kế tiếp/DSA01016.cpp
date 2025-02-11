#include <bits/stdc++.h>
using namespace std;

int n,a[100],cnt;
bool ok;
void ktao(){
    cnt = 1;
    a[1] = n;
}

void sinh(){
    int i = cnt;
    while(i>=1 && a[i]==1){
        --i;
    }
    if(i==0) ok = false;
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if(q){
            for(int j=1;j<=q;j++){
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if(r){
            ++cnt;
            a[cnt] = r;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok = true;
        ktao();
        while(ok){
            for(int i=1;i<=cnt;i++){
             if(i==1){
                 cout <<"(";
             }
                cout  << a[i];
                if(i!=cnt) cout <<" ";
            }
            cout <<") ";
            sinh();
        }
        cout <<'\n';
    }
    return 0;
}