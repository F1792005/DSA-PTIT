#include <bits/stdc++.h>
using namespace std;

int n,p,s;
bool check(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> p >> s;

    }
}