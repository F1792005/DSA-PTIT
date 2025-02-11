#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<ll> a(n),b(m);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll k = a[n-1] * b[0];
        cout << k << '\n';
    }
}