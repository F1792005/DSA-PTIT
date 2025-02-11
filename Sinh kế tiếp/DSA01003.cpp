#include <bits/stdc++.h>
using namespace std;

int n,a[1001];
bool ok;

void sinh(){
    int i = n - 1;
    while(i>=1 && a[i]>a[i+1]){
        --i;
    }
    if(i==0) ok = false;
    else{
        int j = n;
        while(a[i]>a[j]) --j;
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
        ok = true;
        cin >> n;
        for(int i = 1;i<=n;i++){
            cin >> a[i];
        }
        sinh();
        if(ok){
            for(int i = 1;i<=n;i++){
                cout << a[i];
                if(i!=n) cout <<" ";
            }
        }
        else{
            for(int i=1;i<=n;i++){
                cout << i;
                if(i!=n) cout <<" ";
            }
        }
        cout <<'\n';
    }
    return 0;
}