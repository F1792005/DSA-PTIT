#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i=0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                int k = a[i] + a[j];
                if(k == m) cnt ++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}