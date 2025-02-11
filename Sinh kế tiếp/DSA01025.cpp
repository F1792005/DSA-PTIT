#include <bits/stdc++.h>
using namespace std;

int n,k;
char a[20];
bool ok;
void ktao(){
    for(int i = 1;i<=k;i++){
        a[i] = 'A'+ (i-1);
    }
}
void sinh(){
    int i = k;
    while(i>=1 && a[i] == 'A' + (n-k + i-1)){
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
        while(ok){
            for(int i=1;i<=k;i++){
                cout << a[i];
            }
            sinh();
            cout <<'\n';
        }
    }
    return 0;
}