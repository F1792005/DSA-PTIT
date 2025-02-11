#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        ll x=0,y=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i+=2){
            x = x*10 + a[i];
        }
        for(int i=1;i<n;i+=2){
            y = y*10 + a[i];
        }
        cout << x + y << '\n';
    }
    return 0;
}