#include <bits/stdc++.h>
using namespace std;

int n;
string a[100];
bool ok ;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = "A";
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i]=="B"){
        a[i] = "A";
        --i;
    }
    if(i == 0 ){
        ok = false;
    }
    else{
        a[i] = "B";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok = true;
        ktao();
        while(ok){
            for(int i = 1 ;i<=n;i++){
                cout << a[i] ;
            }
            cout <<" ";
            sinh();
        }
        cout <<'\n';
    }
    return 0;
}