#include <bits/stdc++.h>
using namespace std;

int s[1000000];

void sang(){
    for(int i=0;i<=1000000;i++){
        s[i] = 1;
    }
    s[0] = s[1] = 0;
    for(int i=2;i*i<=1000000;i++){
        if(s[i]){
            for(int j=i*i ;j<=1000000;j+=i){
                s[j] =0;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    sang();
    while(t--){
        int n;
        cin >> n;
        int check = 0;
        for(int i=2;i<=n/2;i++){
            if(s[i] && s[n-i]){
                cout << i << " " << n-i <<'\n';
                check = 1;
                break;
            }
        }
        if(check == 0) cout <<"-1" <<'\n';
    }
    return 0;
}